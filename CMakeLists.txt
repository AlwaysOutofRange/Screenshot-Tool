cmake_minimum_required(VERSION 3.19)
project(screenshot_tool)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(screenshot_tool
    main.cpp
    headers/Screen.hpp
    sources/Screen.cpp
    ui/ScreenshotUI.cpp
    ui/ScreenshotUI.hpp
    ui/ScreenshotUI.ui
    ui/CaptureImage/CaptureImage.cpp
    ui/CaptureImage/CaptureImage.hpp
    ui/CaptureImage/CaptureImage.ui
    ui/Preview/Preview.cpp
    ui/Preview/Preview.hpp
    ui/Preview/Preview.ui
    headers/Utils.hpp
    sources/Utils.cpp)

target_link_libraries(screenshot_tool Qt5::Widgets)
