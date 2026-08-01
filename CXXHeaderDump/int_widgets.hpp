#ifndef UE4SS_SDK_int_widgets_HPP
#define UE4SS_SDK_int_widgets_HPP

class Iint_widgets_C : public IInterface
{

    void triggerRandom();
    void getSearchName(FName& Name);
    void setIndex(int32 Index);
    void resume();
}; // Size: 0x28

#endif
