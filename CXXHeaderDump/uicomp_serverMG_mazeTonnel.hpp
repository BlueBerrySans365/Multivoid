#ifndef UE4SS_SDK_uicomp_serverMG_mazeTonnel_HPP
#define UE4SS_SDK_uicomp_serverMG_mazeTonnel_HPP

class Uuicomp_serverMG_mazeTonnel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_34;                                                           // 0x0268 (size: 0x8)
    bool Finish;                                                                      // 0x0270 (size: 0x1)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_uicomp_serverMG_mazeTonnel(int32 EntryPoint);
}; // Size: 0x271

#endif
