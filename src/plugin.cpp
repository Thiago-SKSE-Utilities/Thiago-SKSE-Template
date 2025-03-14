#include "Logger.h"
#include "UI.h"
#include "Hooks.h"
#include "DrawDebugExtension.h"

void OnMessage(SKSE::MessagingInterface::Message* message) {
    DrawDebug::OnMessage(message);
    if (message->type == SKSE::MessagingInterface::kDataLoaded) {
    }
    if (message->type == SKSE::MessagingInterface::kPostLoad) {
    }
}

SKSEPluginLoad(const SKSE::LoadInterface *skse) {
    SKSE::Init(skse);
    SKSE::GetMessagingInterface()->RegisterListener(OnMessage);
    SetupLog();
    logger::info("Plugin loaded");
    UI::Register();
    Hooks::Install();
    return true;
}