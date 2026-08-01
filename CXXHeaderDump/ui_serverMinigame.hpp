#ifndef UE4SS_SDK_ui_serverMinigame_HPP
#define UE4SS_SDK_ui_serverMinigame_HPP

class Uui_serverMinigame_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0268 (size: 0x8)
    class UButton* Button_128;                                                        // 0x0270 (size: 0x8)
    class UButton* button_exit;                                                       // 0x0278 (size: 0x8)
    class UButton* button_exit_wireMG;                                                // 0x0280 (size: 0x8)
    class UButton* button_fitMG_exit;                                                 // 0x0288 (size: 0x8)
    class UButton* button_fix;                                                        // 0x0290 (size: 0x8)
    class UButton* button_hackMG_exit;                                                // 0x0298 (size: 0x8)
    class UButton* button_hackMG_refresh;                                             // 0x02A0 (size: 0x8)
    class UButton* button_mazeMG_exit;                                                // 0x02A8 (size: 0x8)
    class UButton* button_pipeMG_exit;                                                // 0x02B0 (size: 0x8)
    class UButton* button_pipeMG_pipe_C;                                              // 0x02B8 (size: 0x8)
    class UButton* button_pipeMG_pipe_E;                                              // 0x02C0 (size: 0x8)
    class UButton* button_pipeMG_pipe_R;                                              // 0x02C8 (size: 0x8)
    class UButton* button_pipeMG_pipe_S;                                              // 0x02D0 (size: 0x8)
    class UButton* button_pipeMG_pipe_T;                                              // 0x02D8 (size: 0x8)
    class UButton* button_pipeMG_pipe_X;                                              // 0x02E0 (size: 0x8)
    class UButton* button_pipeMG_start;                                               // 0x02E8 (size: 0x8)
    class UButton* button_scrambleMG;                                                 // 0x02F0 (size: 0x8)
    class UButton* button_simonMG_begin;                                              // 0x02F8 (size: 0x8)
    class UButton* button_simonMG_begin_1;                                            // 0x0300 (size: 0x8)
    class UButton* button_slidersMG_exit;                                             // 0x0308 (size: 0x8)
    class UCanvasPanel* canvas_maze;                                                  // 0x0310 (size: 0x8)
    class UCanvasPanel* canvas_mazebox;                                               // 0x0318 (size: 0x8)
    class UCanvasPanel* canvas_mazeMG_cursor;                                         // 0x0320 (size: 0x8)
    class UGridPanel* canvas_pipeMG;                                                  // 0x0328 (size: 0x8)
    class UHorizontalBox* hb_WireMGBottomButtons;                                     // 0x0330 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_0;                                          // 0x0338 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_1;                                          // 0x0340 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_2;                                          // 0x0348 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_3;                                          // 0x0350 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_4;                                          // 0x0358 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_5;                                          // 0x0360 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_6;                                          // 0x0368 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_7;                                          // 0x0370 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_8;                                          // 0x0378 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_9;                                          // 0x0380 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_10;                                         // 0x0388 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_11;                                         // 0x0390 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_12;                                         // 0x0398 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_13;                                         // 0x03A0 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_14;                                         // 0x03A8 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_15;                                         // 0x03B0 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_16;                                         // 0x03B8 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_17;                                         // 0x03C0 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_18;                                         // 0x03C8 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_19;                                         // 0x03D0 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_20;                                         // 0x03D8 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_21;                                         // 0x03E0 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_22;                                         // 0x03E8 (size: 0x8)
    class UHorizontalBox* hbox_hackMGLine_23;                                         // 0x03F0 (size: 0x8)
    class UHorizontalBox* hbox_simonMG_bottomRow;                                     // 0x03F8 (size: 0x8)
    class UHorizontalBox* hbox_simonMG_topRow;                                        // 0x0400 (size: 0x8)
    class UImage* Image_27;                                                           // 0x0408 (size: 0x8)
    class UImage* Image_28;                                                           // 0x0410 (size: 0x8)
    class UImage* Image_29;                                                           // 0x0418 (size: 0x8)
    class UImage* Image_34;                                                           // 0x0420 (size: 0x8)
    class UImage* Image_293;                                                          // 0x0428 (size: 0x8)
    class UImage* image_backgroundMatrix;                                             // 0x0430 (size: 0x8)
    class UImage* image_backgroundMatrix_1;                                           // 0x0438 (size: 0x8)
    class UImage* image_lines;                                                        // 0x0440 (size: 0x8)
    class URetainerBox* RetainerBox_48;                                               // 0x0448 (size: 0x8)
    class Uuicomp_serverWireMG_button_C* serverWireMG_bottomButton_0;                 // 0x0450 (size: 0x8)
    class Uuicomp_serverWireMG_button_C* serverWireMG_bottomButton_1;                 // 0x0458 (size: 0x8)
    class Uuicomp_serverWireMG_button_C* serverWireMG_bottomButton_2;                 // 0x0460 (size: 0x8)
    class Uuicomp_serverWireMG_button_C* serverWireMG_bottomButton_3;                 // 0x0468 (size: 0x8)
    class Uuicomp_serverWireMG_button_C* serverWireMG_bottomButton_4;                 // 0x0470 (size: 0x8)
    class Uuicomp_serverWireMG_button_C* serverWireMG_bottomButton_5;                 // 0x0478 (size: 0x8)
    class Uuicomp_serverWireMG_button_C* serverWireMG_bottomButton_6;                 // 0x0480 (size: 0x8)
    class Uuicomp_serverWireMG_button_C* serverWireMG_bottomButton_7;                 // 0x0488 (size: 0x8)
    class Uuicomp_serverWireMG_button_C* serverWireMG_topButton_0;                    // 0x0490 (size: 0x8)
    class Uuicomp_serverWireMG_button_C* serverWireMG_topButton_1;                    // 0x0498 (size: 0x8)
    class Uuicomp_serverWireMG_button_C* serverWireMG_topButton_2;                    // 0x04A0 (size: 0x8)
    class Uuicomp_serverWireMG_button_C* serverWireMG_topButton_3;                    // 0x04A8 (size: 0x8)
    class Uuicomp_serverWireMG_button_C* serverWireMG_topButton_4;                    // 0x04B0 (size: 0x8)
    class Uuicomp_serverWireMG_button_C* serverWireMG_topButton_5;                    // 0x04B8 (size: 0x8)
    class Uuicomp_serverWireMG_button_C* serverWireMG_topButton_6;                    // 0x04C0 (size: 0x8)
    class Uuicomp_serverWireMG_button_C* serverWireMG_topButton_7;                    // 0x04C8 (size: 0x8)
    class UWidgetSwitcher* siwtcher_death;                                            // 0x04D0 (size: 0x8)
    class USlider* slider_pipeMG_speed;                                               // 0x04D8 (size: 0x8)
    class UWidgetSwitcher* switcher_death2;                                           // 0x04E0 (size: 0x8)
    class UWidgetSwitcher* switcher_games;                                            // 0x04E8 (size: 0x8)
    class UWidgetSwitcher* switcher_hints;                                            // 0x04F0 (size: 0x8)
    class UTextBlock* text_collectedPackets;                                          // 0x04F8 (size: 0x8)
    class UTextBlock* text_hackMG_log;                                                // 0x0500 (size: 0x8)
    class UTextBlock* text_pipeMG_speed;                                              // 0x0508 (size: 0x8)
    class UTextBlock* text_timer;                                                     // 0x0510 (size: 0x8)
    class UTextBlock* text_timerBest;                                                 // 0x0518 (size: 0x8)
    class Uuicomp_serverMG_mazeTonnel_C* ucomp_mazeMG_finish;                         // 0x0520 (size: 0x8)
    class Uuicomp_serverMG_bitfitElement_C* uicomp_serverMG_bitfitElement_0;          // 0x0528 (size: 0x8)
    class Uuicomp_serverMG_bitfitElement_C* uicomp_serverMG_bitfitElement_1;          // 0x0530 (size: 0x8)
    class Uuicomp_serverMG_bitfitElement_C* uicomp_serverMG_bitfitElement_2;          // 0x0538 (size: 0x8)
    class Uuicomp_serverMG_bitfitElement_C* uicomp_serverMG_bitfitElement_3;          // 0x0540 (size: 0x8)
    class Uuicomp_serverMG_bitfitElement_C* uicomp_serverMG_bitfitElement_4;          // 0x0548 (size: 0x8)
    class Uuicomp_serverMG_bitfitElement_C* uicomp_serverMG_bitfitElement_5;          // 0x0550 (size: 0x8)
    class Uuicomp_serverMG_bitfitElement_C* uicomp_serverMG_bitfitElement_6;          // 0x0558 (size: 0x8)
    class Uuicomp_serverMG_bitfitElement_C* uicomp_serverMG_bitfitElement_7;          // 0x0560 (size: 0x8)
    class Uuicomp_serverMG_bitfitElement_C* uicomp_serverMG_bitfitElement_8;          // 0x0568 (size: 0x8)
    class Uuicomp_serverMG_bitfitElement_C* uicomp_serverMG_bitfitElement_9;          // 0x0570 (size: 0x8)
    class Uuicomp_serverMG_bitfitElement_C* uicomp_serverMG_bitfitElement_10;         // 0x0578 (size: 0x8)
    class Uuicomp_serverMG_bitfitElement_C* uicomp_serverMG_bitfitElement_11;         // 0x0580 (size: 0x8)
    class Uuicomp_serverMG_bitfitElement_C* uicomp_serverMG_bitfitElement_12;         // 0x0588 (size: 0x8)
    class Uuicomp_serverMG_bitfitElement_C* uicomp_serverMG_bitfitElement_13;         // 0x0590 (size: 0x8)
    class Uuicomp_serverMG_slider_C* uicomp_serverMG_slider_0;                        // 0x0598 (size: 0x8)
    class Uuicomp_serverMG_slider_C* uicomp_serverMG_slider_1;                        // 0x05A0 (size: 0x8)
    class Uuicomp_serverMG_slider_C* uicomp_serverMG_slider_2;                        // 0x05A8 (size: 0x8)
    class Uuicomp_serverMG_slider_C* uicomp_serverMG_slider_3;                        // 0x05B0 (size: 0x8)
    class Uuicomp_serverMG_slider_C* uicomp_serverMG_slider_4;                        // 0x05B8 (size: 0x8)
    class Uuicomp_serverMG_slider_C* uicomp_serverMG_slider_5;                        // 0x05C0 (size: 0x8)
    class UVerticalBox* VerticalBox_slots;                                            // 0x05C8 (size: 0x8)
    class AmainPlayer_C* ppl;                                                         // 0x05D0 (size: 0x8)
    class UTextureRenderTarget2D* rtTarget;                                           // 0x05D8 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x05E0 (size: 0x8)
    class UCanvas* Canvas;                                                            // 0x05E8 (size: 0x8)
    FDrawToRenderTargetContext canvasContext;                                         // 0x05F0 (size: 0x10)
    FVector2D math_MGlastloc;                                                         // 0x0600 (size: 0x8)
    TArray<class Uuicomp_serverMathMGSlot_C*> mathMG_rowNumberSlots;                  // 0x0608 (size: 0x10)
    int32 mathMG_row;                                                                 // 0x0618 (size: 0x4)
    TArray<int32> mathMG_probs;                                                       // 0x0620 (size: 0x10)
    TArray<int32> mathMG_rowNumbers;                                                  // 0x0630 (size: 0x10)
    class AserverBox_C* server;                                                       // 0x0640 (size: 0x8)
    bool Finished;                                                                    // 0x0648 (size: 0x1)
    bool IsActive;                                                                    // 0x0649 (size: 0x1)
    float Time;                                                                       // 0x064C (size: 0x4)
    TArray<class Uuicomp_serverWireMG_button_C*> wireMG_bottomButtons;                // 0x0650 (size: 0x10)
    TArray<class Uuicomp_serverWireMG_button_C*> wireMG_topButtons;                   // 0x0660 (size: 0x10)
    TArray<class Uuicomp_serverWireMG_button_C*> wireMG_allButtons;                   // 0x0670 (size: 0x10)
    class Uuicomp_serverWireMG_button_C* wireMG_dragging;                             // 0x0680 (size: 0x8)
    int32 wireMG_amount;                                                              // 0x0688 (size: 0x4)
    TArray<class UHorizontalBox*> hackMG_lines;                                       // 0x0690 (size: 0x10)
    TArray<FString> dictionary_SEasy;                                                 // 0x06A0 (size: 0x10)
    TArray<FString> dictionary_easy;                                                  // 0x06B0 (size: 0x10)
    TArray<FString> dictionary_normal;                                                // 0x06C0 (size: 0x10)
    TArray<FString> dictionary_hard;                                                  // 0x06D0 (size: 0x10)
    TArray<FString> dictionary_SHard;                                                 // 0x06E0 (size: 0x10)
    TArray<class Uuicomp_serverHackMG_symbolCluster_C*> hackMG_words;                 // 0x06F0 (size: 0x10)
    int32 hackMG_len;                                                                 // 0x0700 (size: 0x4)
    FString hackMG_correct;                                                           // 0x0708 (size: 0x10)
    int32 hackMG_attempts;                                                            // 0x0718 (size: 0x4)
    int32 hackMG_attempts_max;                                                        // 0x071C (size: 0x4)
    TArray<FString> hackMG_wordsString;                                               // 0x0720 (size: 0x10)
    TEnumAsByte<enum_difficulty::Type> difficulty;                                    // 0x0730 (size: 0x1)
    int32 minigameType;                                                               // 0x0734 (size: 0x4)
    TArray<class Uuicomp_serverMG_slider_C*> serverMG_sliders;                        // 0x0738 (size: 0x10)
    class Uuicomp_serverMG_slider_C* slidersMG_selected;                              // 0x0748 (size: 0x8)
    float DeltaTime;                                                                  // 0x0750 (size: 0x4)
    float slidersMG_speed;                                                            // 0x0754 (size: 0x4)
    TArray<class Uuicomp_serverMG_slider_C*> serverMG_sliders_stack;                  // 0x0758 (size: 0x10)
    TArray<FVector2D> mazeMG_points;                                                  // 0x0768 (size: 0x10)
    TArray<class Uuicomp_serverMG_mazeTonnel_C*> mazeMG_segments;                     // 0x0778 (size: 0x10)
    bool mazeMG_cursorMove;                                                           // 0x0788 (size: 0x1)
    FVector2D mazeMG_mousePos;                                                        // 0x078C (size: 0x8)
    FVector2D lastMousePos;                                                           // 0x0794 (size: 0x8)
    float cursorSpeed;                                                                // 0x079C (size: 0x4)
    FVector2D mazeMG_lastMousePosition;                                               // 0x07A0 (size: 0x8)
    FVector2D cursorDelta;                                                            // 0x07A8 (size: 0x8)
    bool mazeMG_cursorHold;                                                           // 0x07B0 (size: 0x1)
    TArray<class Uuicomp_serverMG_pipe_C*> pipeMG_pipes;                              // 0x07B8 (size: 0x10)
    int32 pipeMG_selectedPipe;                                                        // 0x07C8 (size: 0x4)
    TArray<class UButton*> pipeMG_pipeButtons;                                        // 0x07D0 (size: 0x10)
    int32 pipeMG_packets;                                                             // 0x07E0 (size: 0x4)
    int32 pipeMG_obstacles_div;                                                       // 0x07E4 (size: 0x4)
    FIntPoint pipeMG_movementDirection;                                               // 0x07E8 (size: 0x8)
    class Uuicomp_serverMG_pipe_C* pipeMG_activePipe;                                 // 0x07F0 (size: 0x8)
    class Uuicomp_serverMG_pipe_C* pipeMG_previousPipe;                               // 0x07F8 (size: 0x8)
    float pipeMG_timer;                                                               // 0x0800 (size: 0x4)
    float pipeMG_timerSeconds;                                                        // 0x0804 (size: 0x4)
    int32 pipeMG_packets_gathered;                                                    // 0x0808 (size: 0x4)
    float pipeMG_speedMult;                                                           // 0x080C (size: 0x4)
    FIntPoint pipeMG_gridSize;                                                        // 0x0810 (size: 0x8)
    int32 simonMG_size;                                                               // 0x0818 (size: 0x4)
    TArray<class Uuicomp_serverMG_simonButton_C*> simonMG_allButtons;                 // 0x0820 (size: 0x10)
    TArray<class Uuicomp_serverMG_simonButton_C*> simonMG_aactiveButtons;             // 0x0830 (size: 0x10)
    int32 simonMG_simonMaxSteps;                                                      // 0x0840 (size: 0x4)
    int32 simonMG_simonStep;                                                          // 0x0844 (size: 0x4)
    float simonMG_delay;                                                              // 0x0848 (size: 0x4)
    TArray<int32> simonMG_simonLevels;                                                // 0x0850 (size: 0x10)
    bool simonMG_simonSays;                                                           // 0x0860 (size: 0x1)
    TArray<class Uuicomp_serverMG_simonButton_C*> simonSays_stack;                    // 0x0868 (size: 0x10)
    class Uuicomp_serverMG_simonButton_C* simonMG_prevButton;                         // 0x0878 (size: 0x8)
    bool holdRMB;                                                                     // 0x0880 (size: 0x1)
    class UAudioComponent* deathaudio;                                                // 0x0888 (size: 0x8)
    bool isDeath;                                                                     // 0x0890 (size: 0x1)
    bool isLol;                                                                       // 0x0891 (size: 0x1)
    TArray<class Uuicomp_serverMG_bitfitElement_C*> bitfitMG_slots;                   // 0x0898 (size: 0x10)
    bool bitfitMG_active;                                                             // 0x08A8 (size: 0x1)
    int32 bitfitMG_amount;                                                            // 0x08AC (size: 0x4)
    TArray<class Uuicomp_serverMG_bitfitElement_C*> bitfitMG_activeSlots;             // 0x08B0 (size: 0x10)
    float bitfitMG_speed;                                                             // 0x08C0 (size: 0x4)
    float bitfitMG_alpha;                                                             // 0x08C4 (size: 0x4)
    TArray<int32> bitfitMG_amounts;                                                   // 0x08C8 (size: 0x10)
    bool mazeMG_wallsNoCollide;                                                       // 0x08D8 (size: 0x1)
    bool mazeMG_roflEnabled;                                                          // 0x08D9 (size: 0x1)

    void mazeMG_roflSquare(bool Enable);
    void bitfitMG_launch();
    void bitfitMG_check(bool& checked);
    void bitfitMG_prepare();
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void pipeMG_cleanLineBetweenCells(int32 Precision, FIntPoint A, FIntPoint B);
    void pipeMG_coordinateToIndex(FIntPoint coord, int32& Index);
    void pipeMG_indexToCoordinate(int32 Index, FIntPoint& coord);
    void simonMG_prepare();
    void sound_beepShort();
    void sound_beep2();
    void pipeMG_updatePackets();
    void pipeMG_directionToVector(int32 dir, FIntPoint& vec);
    void pipeMG_vectorToDirection(FIntPoint Vector, int32& Direction);
    void pipeMG_getNeighborPipe(int32 pipeIndex, FIntPoint relative, int32 verticalSize, class Uuicomp_serverMG_pipe_C*& Output);
    void pipeMG_MGmakePipeButtons();
    void pipeMG_updButtons();
    void pipeMG_prepare();
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void mazeMG_onFinish(bool& Finished);
    void segmentInsideBox(FVector2D BoxPosition, FVector2D BoxSize, FVector2D segmentA, FVector2D segmentB, float Margin, bool& inside);
    void mazeMG_isCursorInBounds(bool& Hit);
    void mazeMG_prepare();
    void finishServer();
    void quitServer();
    void slidersMG_getLastSlider(class Uuicomp_serverMG_slider_C*& Output, bool& Finished);
    void sliderMG_prepare();
    void mathMG_prepare();
    void hackMG_getLines();
    void hackMG_refresh();
    void hackMG_click(class Uuicomp_serverHackMG_symbolCluster_C* word);
    void hackMG_compareWords(FString password, FString compare, FString& return, bool& correct);
    void hackMG_prepare();
    void sound_highscore();
    void sound_success();
    void sound_failure();
    void sound_button();
    void checkWIreMG();
    void resetWireMG();
    void scrambleWireMG();
    FText createTime(float InputPin);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void compare();
    void draw(FVector2D ScreenPositionB);
    void Exit();
    void Enter(class AmainPlayer_C* Player, int32 Type, bool isDeath, bool isLol);
    void BndEvt__button_exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void End(bool correct);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void startDragging(class Uuicomp_serverWireMG_button_C* wireMG_dragging);
    void BndEvt__ui_serverMinigame_button_scrambleMG_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_serverMinigame_button_exit_wireMG_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_serverMinigame_button_hackMG_refresh_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_serverMinigame_button_hackMG_exit_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__ui_serverMinigame_Button_128_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__ui_serverMinigame_Button_128_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__ui_serverMinigame_button_pipeMG_pipe_E_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_serverMinigame_button_pipeMG_pipe_C_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_serverMinigame_button_pipeMG_pipe_T_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_serverMinigame_button_pipeMG_pipe_X_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_serverMinigame_button_pipeMG_pipe_R_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_serverMinigame_button_pipeMG_pipe_S_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void startPipe();
    void BndEvt__ui_serverMinigame_button_pipeMG_start_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void pipeMG_stopTick();
    void BndEvt__ui_serverMinigame_slider_pipeMG_speed_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__ui_serverMinigame_button_simonMG_begin_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void simonMG_buttonPress(const class Uuicomp_serverMG_simonButton_C*& Item);
    void simonMG_say();
    void BndEvt__ui_serverMinigame_button_simonMG_begin_1_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_serverMinigame_button_slidersMG_exit_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_serverMinigame_button_mazeMG_exit_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_serverMinigame_button_pipeMG_exit_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
    void superdeath();
    void BndEvt__ui_serverMinigame_Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_serverMinigame_button_fix_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_serverMinigame_button_fitMG_exit_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_serverMinigame(int32 EntryPoint);
}; // Size: 0x8DA

#endif
