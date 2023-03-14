#include "src/imgui.h"
#include "src/imgui_impl_dx9.h"
#include "src/imgui_impl_win32.h"
#include <d3d9.h>
#include <tchar.h>
#include <functional>

namespace ImGui
{
    void setRenderFunction(std::function<void()> func);
    void Run(LPCWSTR caption, int w, int h);
}
