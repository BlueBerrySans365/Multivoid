#ifndef UE4SS_SDK_DiscordMessenger_HPP
#define UE4SS_SDK_DiscordMessenger_HPP

struct FDiscordAuthor
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString URL;                                                                      // 0x0010 (size: 0x10)
    FString IconUrl;                                                                  // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FDiscordEmbed
{
    FString Title;                                                                    // 0x0000 (size: 0x10)
    FString Description;                                                              // 0x0010 (size: 0x10)
    FLinearColor Color;                                                               // 0x0020 (size: 0x10)
    FString URL;                                                                      // 0x0030 (size: 0x10)
    FDiscordAuthor Author;                                                            // 0x0040 (size: 0x30)
    TArray<FDiscordField> Fields;                                                     // 0x0070 (size: 0x10)
    FString Image;                                                                    // 0x0080 (size: 0x10)
    FString Footer;                                                                   // 0x0090 (size: 0x10)

}; // Size: 0xA0

struct FDiscordField
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString Value;                                                                    // 0x0010 (size: 0x10)
    bool IsInline;                                                                    // 0x0020 (size: 0x1)

}; // Size: 0x28

class UDiscordMessengerBPLibrary : public UBlueprintFunctionLibrary
{

    void SendDiscordMessage(FString Webhook, FString Content, const FDiscordEmbed& Embed, const TArray<FString>& files);
}; // Size: 0x28

#endif
