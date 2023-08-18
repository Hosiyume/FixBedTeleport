#pragma comment(lib, "../SDK/lib/bedrock_server_api.lib")
#pragma comment(lib, "../SDK/lib/bedrock_server_var.lib")
#pragma comment(lib, "../SDK/lib/SymDBHelper.lib")
#pragma comment(lib, "../SDK/lib/LiteLoader.lib")

#include <llapi/HookAPI.h>
#include <llapi/mc/ServerPlayer.hpp>

TInstanceHook(void, "?changeDimension@ServerPlayer@@UEAAXV?$AutomaticID@VDimension@@H@@@Z",
              ServerPlayer, void* a2) {
    if (isSleeping()) {
        return;
    }
    original(this, a2);
}
