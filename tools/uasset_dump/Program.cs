using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.Json;
using UAssetAPI;
using UAssetAPI.ExportTypes;
using UAssetAPI.FieldTypes;
using UAssetAPI.UnrealTypes;

// Usage: UAssetDump <contentRoot> <analyzedCfgsRoot> <outputJsonl>
//
// Walks every *.html file under analyzedCfgsRoot (each one corresponds 1:1 to a
// Blueprint/Interface/Level-script asset), finds the matching .uasset/.umap under
// contentRoot, loads it with UAssetAPI (UE4.27), and emits one JSON line per asset
// with: class name, SuperStruct, Interfaces (implemented interfaces), and for the
// ClassExport plus every FunctionExport in the file, the full property/param list
// enriched with resolved inner-type references (PropertyClass/Struct/Inner/MetaClass/
// InterfaceClass/Enum/SignatureFunction/KeyProp/ValueProp), plus FunctionFlags.
//
// FPackageIndex -> string resolution mirrors kismet-analyzer's SummaryGenerator.ToString(FPackageIndex)
// exactly, so the strings here are directly comparable/joinable with the "import X->Y->Z"
// strings already scraped from the existing ANALYZED/cfgs/*.html dumps.

class Dumper
{
    UAsset Asset;
    Export? CurrentContext; // ClassExport or FunctionExport currently being described, for local-name shortening

    Dumper(UAsset asset) { Asset = asset; }

    string PkgIndexToString(FPackageIndex? index)
    {
        if (index == null || index.IsNull()) return "null";

        string GetChain(FPackageIndex child)
        {
            if (child.IsNull()) return "";
            if (child.IsImport())
            {
                var a = child.ToImport(Asset);
                return $"{GetChain(a.OuterIndex)}{a.ObjectName}->";
            }
            if (child.IsExport())
            {
                var a = child.ToExport(Asset);
                return $"{GetChain(a.OuterIndex)}{a.ObjectName}->";
            }
            return "";
        }

        if (index.IsExport())
        {
            var exp = index.ToExport(Asset);
            if (CurrentContext != null)
            {
                var contextIndex = Asset.Exports.IndexOf(CurrentContext) + 1;
                if (exp.OuterIndex.Index == contextIndex) return exp.ObjectName.ToString();
            }
            return $"export {GetChain(exp.OuterIndex)}{exp.ObjectName}";
        }
        else if (index.IsImport())
        {
            var imp = index.ToImport(Asset);
            return $"import {GetChain(imp.OuterIndex)}{imp.ObjectName}";
        }
        return "null";
    }

    object? DescribeProperty(FProperty prop)
    {
        var d = new Dictionary<string, object?>
        {
            ["name"] = prop.Name.ToString(),
            ["type"] = prop.SerializedType.ToString(),
            ["flags"] = prop.PropertyFlags.ToString().Split(", ", StringSplitOptions.RemoveEmptyEntries).Where(f => f != "CPF_None").ToArray(),
            ["arrayDim"] = (int)prop.ArrayDim,
        };

        switch (prop)
        {
            case FObjectProperty op:
                d["propertyClass"] = PkgIndexToString(op.PropertyClass);
                if (op is FClassProperty cp) d["metaClass"] = PkgIndexToString(cp.MetaClass);
                if (op is FSoftClassProperty scp) d["metaClass"] = PkgIndexToString(scp.MetaClass);
                break;
            case FStructProperty sp:
                d["struct"] = PkgIndexToString(sp.Struct);
                break;
            case FArrayProperty ap:
                d["inner"] = DescribeProperty(ap.Inner);
                break;
            case FSetProperty setp:
                d["element"] = DescribeProperty(setp.ElementProp);
                break;
            case FMapProperty mp:
                d["key"] = DescribeProperty(mp.KeyProp);
                d["value"] = DescribeProperty(mp.ValueProp);
                break;
            case FInterfaceProperty ip:
                d["interfaceClass"] = PkgIndexToString(ip.InterfaceClass);
                break;
            case FEnumProperty ep:
                d["enum"] = PkgIndexToString(ep.Enum);
                d["underlying"] = DescribeProperty(ep.UnderlyingProp);
                break;
            case FByteProperty bp:
                if (bp.Enum != null && !bp.Enum.IsNull()) d["enum"] = PkgIndexToString(bp.Enum);
                break;
            case FDelegateProperty dp:
                d["signatureFunction"] = PkgIndexToString(dp.SignatureFunction);
                break;
            case FOptionalProperty optp:
                d["value"] = DescribeProperty(optp.ValueProperty);
                break;
        }
        return d;
    }

    List<object?> DescribeProperties(StructExport structExport)
    {
        var result = new List<object?>();
        if (structExport.LoadedProperties != null && structExport.LoadedProperties.Length > 0)
        {
            foreach (var prop in structExport.LoadedProperties)
            {
                try { result.Add(DescribeProperty(prop)); }
                catch (Exception e) { result.Add(new Dictionary<string, object?> { ["name"] = prop?.Name?.ToString(), ["error"] = e.Message }); }
            }
        }
        else if (structExport.Children != null)
        {
            foreach (var childIndex in structExport.Children)
            {
                if (childIndex.IsExport())
                {
                    var childExport = childIndex.ToExport(Asset);
                    if (childExport is PropertyExport propExport)
                    {
                        var typeName = childExport.GetExportClassType().ToString();
                        var d = new Dictionary<string, object?>
                        {
                            ["name"] = childExport.ObjectName.ToString(),
                            ["type"] = typeName.Replace("Property", ""),
                            ["flags"] = propExport.Property.PropertyFlags.ToString().Split(", ", StringSplitOptions.RemoveEmptyEntries).Where(f => f != "CPF_None").ToArray(),
                        };
                        result.Add(d);
                    }
                }
            }
        }
        return result;
    }

    public Dictionary<string, object?> DescribeAsset()
    {
        var root = new Dictionary<string, object?>();
        var classExport = Asset.GetClassExport();
        if (classExport == null) return root;

        CurrentContext = classExport;
        root["className"] = classExport.ObjectName.ToString();
        root["superStruct"] = PkgIndexToString(classExport.SuperStruct);
        root["classFlags"] = classExport.ClassFlags.ToString().Split(", ", StringSplitOptions.RemoveEmptyEntries).ToArray();
        root["interfaces"] = classExport.Interfaces?.Select(i => new Dictionary<string, object?>
        {
            ["class"] = PkgIndexToString(new FPackageIndex(i.Class)),
            ["implementedByBlueprint"] = i.bImplementedByK2
        }).ToList<object?>() ?? new List<object?>();
        root["properties"] = DescribeProperties(classExport);

        var functions = new List<object?>();
        foreach (var export in Asset.Exports)
        {
            if (export is FunctionExport fn)
            {
                CurrentContext = fn;
                var fd = new Dictionary<string, object?>
                {
                    ["name"] = fn.ObjectName.ToString(),
                    ["functionFlags"] = fn.FunctionFlags.ToString().Split(", ", StringSplitOptions.RemoveEmptyEntries).ToArray(),
                    ["superStruct"] = PkgIndexToString(fn.SuperStruct),
                    ["params"] = DescribeProperties(fn),
                };
                functions.Add(fd);
            }
        }
        root["functions"] = functions;
        CurrentContext = classExport;
        return root;
    }

    public static Dictionary<string, object?>? Process(string assetPath, EngineVersion ver)
    {
        var asset = new UAsset(assetPath, ver);
        var dumper = new Dumper(asset);
        return dumper.DescribeAsset();
    }
}

class Program
{
    static int Main(string[] args)
    {
        if (args.Length < 3)
        {
            Console.Error.WriteLine("Usage: UAssetDump <contentRoot> <analyzedCfgsRoot> <outputJsonl>");
            return 1;
        }
        string contentRoot = Path.GetFullPath(args[0]);
        string analyzedRoot = Path.GetFullPath(args[1]);
        string outPath = args[2];

        var htmlFiles = Directory.EnumerateFiles(analyzedRoot, "*.html", SearchOption.AllDirectories).OrderBy(x => x).ToList();
        Console.Error.WriteLine($"Found {htmlFiles.Count} html files under {analyzedRoot}");

        int ok = 0, failed = 0, missing = 0;
        var jsonOpts = new JsonSerializerOptions { WriteIndented = false };

        using var outFile = new StreamWriter(outPath, false);
        int i = 0;
        foreach (var htmlPath in htmlFiles)
        {
            i++;
            var relNoExt = Path.GetRelativePath(analyzedRoot, htmlPath);
            relNoExt = relNoExt.Substring(0, relNoExt.Length - ".html".Length);

            string? assetPath = null;
            foreach (var ext in new[] { ".uasset", ".umap" })
            {
                var candidate = Path.Combine(contentRoot, relNoExt + ext);
                if (File.Exists(candidate)) { assetPath = candidate; break; }
            }
            if (assetPath == null)
            {
                missing++;
                Console.Error.WriteLine($"[MISSING] {relNoExt}");
                continue;
            }

            try
            {
                var desc = Dumper.Process(assetPath, EngineVersion.VER_UE4_27);
                if (desc == null || desc.Count == 0)
                {
                    failed++;
                    Console.Error.WriteLine($"[NO-CLASS] {relNoExt}");
                    continue;
                }
                desc["relPath"] = relNoExt.Replace('\\', '/');
                var line = JsonSerializer.Serialize(desc, jsonOpts);
                outFile.WriteLine(line);
                ok++;
            }
            catch (Exception e)
            {
                failed++;
                Console.Error.WriteLine($"[ERROR] {relNoExt}: {e.GetType().Name}: {e.Message}");
            }

            if (i % 100 == 0) Console.Error.WriteLine($"... {i}/{htmlFiles.Count} (ok={ok} failed={failed} missing={missing})");
        }

        Console.Error.WriteLine($"Done. ok={ok} failed={failed} missing={missing} total={htmlFiles.Count}");
        return 0;
    }
}
