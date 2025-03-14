#include "UI.h"
#include "SKSEMenuFramework.h"
#include "Configuration.h"

void UI::Register() {

    if (!SKSEMenuFramework::IsInstalled()) {
        return;
    }
    SKSEMenuFramework::SetSection(PROJECT_NAME);
    SKSEMenuFramework::AddSectionItem("Main", Example1::Render);
}


void __stdcall UI::Example1::Render() {
    if (ImGui::Button("Button")) {
        logger::trace("Button pressed");
    }
}