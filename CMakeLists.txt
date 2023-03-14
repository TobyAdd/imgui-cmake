cmake_minimum_required(VERSION 3.0.0)

set(PROJECT ImGui-Example)
project(${PROJECT})

file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
add_executable(${PROJECT} ${SOURCE_FILES})

add_subdirectory(libs/imgui)
target_include_directories(${PROJECT} PRIVATE
    libs/imgui/src
    libs/imgui
)

target_link_libraries(${PROJECT}
    imgui
    d3d9.lib
)