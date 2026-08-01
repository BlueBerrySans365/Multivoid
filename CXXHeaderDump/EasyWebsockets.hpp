#ifndef UE4SS_SDK_EasyWebsockets_HPP
#define UE4SS_SDK_EasyWebsockets_HPP

class UWebSocket : public UObject
{
    FWebSocketOnWebSocketConnected OnWebSocketConnected;                              // 0x0028 (size: 0x10)
    void OnWebSocketConnected();
    FWebSocketOnWebSocketConnectionError OnWebSocketConnectionError;                  // 0x0038 (size: 0x10)
    void OnWebSocketConnectionError(FString Error);
    FWebSocketOnWebSocketClosed OnWebSocketClosed;                                    // 0x0048 (size: 0x10)
    void OnWebSocketClosed(int32 StatusCode, FString Reason, bool bWasClean);
    FWebSocketOnWebSocketMessageReceived OnWebSocketMessageReceived;                  // 0x0058 (size: 0x10)
    void OnWebSocketMessageReceived(FString Message);
    FWebSocketOnWebSocketMessageSent OnWebSocketMessageSent;                          // 0x0068 (size: 0x10)
    void OnWebSocketMessageSent(FString Message);

    void SendMessage(FString Message);
    void OnWebSocketMessageSent_Internal(FString Message);
    void OnWebSocketMessageReceived_Internal(FString Message);
    void OnWebSocketConnectionError_Internal(FString Error);
    void OnWebSocketConnected_Internal();
    void OnWebSocketClosed_Internal(int32 StatusCode, FString Reason, bool bWasClean);
    bool IsConnected();
    void Connect();
    void Close(int32 StatusCode, FString Reason);
}; // Size: 0x88

class UWebSocketFunctionLibrary : public UBlueprintFunctionLibrary
{

    class UWebSocket* CreateWebSocketWithHeaders(FString ServerUrl, TMap<class FString, class FString> UpgradeHeaders, FString ServerProtocol);
    class UWebSocket* CreateWebSocket(FString ServerUrl, FString ServerProtocol);
}; // Size: 0x28

#endif
