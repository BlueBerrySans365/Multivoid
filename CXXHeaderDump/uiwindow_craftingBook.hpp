#ifndef UE4SS_SDK_uiwindow_craftingBook_HPP
#define UE4SS_SDK_uiwindow_craftingBook_HPP

class Uuiwindow_craftingBook_C : public UUserWidget
{
    class UImage* Image_13;                                                           // 0x0260 (size: 0x8)
    class UImage* Image_14;                                                           // 0x0268 (size: 0x8)
    class UImage* Image_15;                                                           // 0x0270 (size: 0x8)
    class UImage* Image_18;                                                           // 0x0278 (size: 0x8)
    class UImage* Image_24;                                                           // 0x0280 (size: 0x8)
    class UImage* Image_25;                                                           // 0x0288 (size: 0x8)
    class UScrollBox* ScrollBox_recipes;                                              // 0x0290 (size: 0x8)
    class UScrollBox* ScrollBox_recipesTxt;                                           // 0x0298 (size: 0x8)
    class UTextBlock* text_bp;                                                        // 0x02A0 (size: 0x8)
    class UTextBlock* text_recipeName;                                                // 0x02A8 (size: 0x8)
    class UTextBlock* text_recipes;                                                   // 0x02B0 (size: 0x8)
    class UTextBlock* text_recipesAm;                                                 // 0x02B8 (size: 0x8)
    class UTextBlock* text_revcraft;                                                  // 0x02C0 (size: 0x8)
    class UEditableTextBox* textbox_search;                                           // 0x02C8 (size: 0x8)
    TArray<class Uuicomp_recipeItemSlot_C*> slots_recipes;                            // 0x02D0 (size: 0x10)
    class Uuicomp_recipeItemSlot_C* selectedRecipeSlot;                               // 0x02E0 (size: 0x8)

    void searchRecipe(FString S);
    void formRecipe(const Fstruct_crafting& struct_crafting);
    void selectRecipeSlot(class Uuicomp_recipeItemSlot_C* selectedRecipeSlot);
    void genRecipe();
}; // Size: 0x2E8

#endif
