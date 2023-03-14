cmake_minimum_required(VERSION 3.0)

add_library(imgui STATIC
    src/imgui.cpp
    src/imgui_demo.cpp
	src/imgui_widgets.cpp
	src/imgui_tables.cpp
    src/imgui_draw.cpp
    src/imgui_impl_win32.cpp
    src/imgui_impl_dx9.cpp
    imgui-ex.cpp
)
set_property(TARGET imgui PROPERTY CXX_STANDARD 17)