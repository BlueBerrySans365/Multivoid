#ifndef UE4SS_SDK_LowEntryEncryption_HPP
#define UE4SS_SDK_LowEntryEncryption_HPP

class ULowEntryEncryptionAesFastEngine : public UObject
{
    int32 ROUNDS;                                                                     // 0x0028 (size: 0x4)
    int32 C0;                                                                         // 0x0050 (size: 0x4)
    int32 C1;                                                                         // 0x0054 (size: 0x4)
    int32 C2;                                                                         // 0x0058 (size: 0x4)
    int32 C3;                                                                         // 0x005C (size: 0x4)
    int32 C0store1;                                                                   // 0x0060 (size: 0x4)
    int32 C1store1;                                                                   // 0x0064 (size: 0x4)
    int32 C2store1;                                                                   // 0x0068 (size: 0x4)
    int32 C3store1;                                                                   // 0x006C (size: 0x4)
    int32 C0store2;                                                                   // 0x0070 (size: 0x4)
    int32 C1store2;                                                                   // 0x0074 (size: 0x4)
    int32 C2store2;                                                                   // 0x0078 (size: 0x4)
    int32 C3store2;                                                                   // 0x007C (size: 0x4)

}; // Size: 0x80

class ULowEntryEncryptionAesFastEngine1D : public UObject
{
    int32 ROUNDS;                                                                     // 0x0028 (size: 0x4)
    TArray<int32> EW;                                                                 // 0x0030 (size: 0x10)
    TArray<int32> DW;                                                                 // 0x0040 (size: 0x10)
    int32 C0;                                                                         // 0x0050 (size: 0x4)
    int32 C1;                                                                         // 0x0054 (size: 0x4)
    int32 C2;                                                                         // 0x0058 (size: 0x4)
    int32 C3;                                                                         // 0x005C (size: 0x4)
    int32 C0store1;                                                                   // 0x0060 (size: 0x4)
    int32 C1store1;                                                                   // 0x0064 (size: 0x4)
    int32 C2store1;                                                                   // 0x0068 (size: 0x4)
    int32 C3store1;                                                                   // 0x006C (size: 0x4)
    int32 C0store2;                                                                   // 0x0070 (size: 0x4)
    int32 C1store2;                                                                   // 0x0074 (size: 0x4)
    int32 C2store2;                                                                   // 0x0078 (size: 0x4)
    int32 C3store2;                                                                   // 0x007C (size: 0x4)

}; // Size: 0x80

class ULowEntryEncryptionAesKey : public UObject
{
    int32 ROUNDS;                                                                     // 0x0028 (size: 0x4)
    bool encryptionWSet;                                                              // 0x002C (size: 0x1)
    bool decryptionWSet;                                                              // 0x0040 (size: 0x1)

}; // Size: 0x58

class ULowEntryEncryptionAesKey1D : public UObject
{
    int32 ROUNDS;                                                                     // 0x0028 (size: 0x4)
    bool encryptionWSet;                                                              // 0x002C (size: 0x1)
    TArray<int32> encryptionW;                                                        // 0x0030 (size: 0x10)
    bool decryptionWSet;                                                              // 0x0040 (size: 0x1)
    TArray<int32> decryptionW;                                                        // 0x0048 (size: 0x10)

}; // Size: 0x58

class ULowEntryEncryptionLibrary : public UBlueprintFunctionLibrary
{

    bool VerifySignatureRsa(const TArray<uint8>& Signature, const TArray<uint8>& ExpectedHash, class ULowEntryRsaPublicKey* PublicKey);
    TArray<uint8> SignRsa(const TArray<uint8>& Hash, class ULowEntryRsaPrivateKey* PrivateKey);
    TArray<uint8> RsaPublicKeyToBytes(class ULowEntryRsaPublicKey* PublicKey);
    TArray<uint8> RsaPrivateKeyToBytes(class ULowEntryRsaPrivateKey* PrivateKey);
    TArray<uint8> GenerateSecureRandomBytesRandomLength(const int32 MinLength, const int32 MaxLength);
    TArray<uint8> GenerateSecureRandomBytes(const int32 Length);
    void GenerateKeysRsa(class ULowEntryRsaPublicKey*& PublicKey, class ULowEntryRsaPrivateKey*& PrivateKey, const int32 Bits);
    TArray<uint8> EncryptRsa(const TArray<uint8>& Data, class ULowEntryRsaPublicKey* PublicKey);
    TArray<uint8> EncryptAes(const TArray<uint8>& Data, const TArray<uint8>& Key, const bool AddHash);
    TArray<uint8> DecryptRsa(const TArray<uint8>& EncryptedData, class ULowEntryRsaPrivateKey* PrivateKey);
    TArray<uint8> DecryptAes(const TArray<uint8>& EncryptedData, const TArray<uint8>& Key, const bool AddedHash);
    void BytesToRsaPublicKey(bool& success, class ULowEntryRsaPublicKey*& PublicKey, const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    void BytesToRsaPrivateKey(bool& success, class ULowEntryRsaPrivateKey*& PrivateKey, const TArray<uint8>& ByteArray, int32 Index, int32 Length);
}; // Size: 0x28

class ULowEntryRsaKeys : public UObject
{
    class ULowEntryRsaPublicKey* PublicKey;                                           // 0x0028 (size: 0x8)
    class ULowEntryRsaPrivateKey* PrivateKey;                                         // 0x0030 (size: 0x8)

}; // Size: 0x38

class ULowEntryRsaPrivateKey : public UObject
{
}; // Size: 0x98

class ULowEntryRsaPublicKey : public UObject
{
}; // Size: 0x48

#endif
