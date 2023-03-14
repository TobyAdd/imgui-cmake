#include <imgui.h>
#include <imgui-ex.h>

void RenderMain() {
    ImGui::Begin("Window");
    ImGui::Text("Hello world!");
    ImGui::End();
}

int main() {
    ImGui::setRenderFunction(RenderMain);
    ImGui::Run(L"Hello world!", 1280, 720);
    return 0;
}