#ifndef UE4SS_SDK_NewWidgetBlueprint_HPP
#define UE4SS_SDK_NewWidgetBlueprint_HPP

class UNewWidgetBlueprint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0268 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_NewWidgetBlueprint(int32 EntryPoint);
}; // Size: 0x270

#endif
