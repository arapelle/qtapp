cmake_minimum_required(VERSION 3.5)

project(qtapp LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(headers
    include/qtcapp/MainWindow.hpp
)

set(sources
    src/main.cpp
    src/MainWindow.cpp
)

set(ui_files
    src/MainWindow.ui
)

add_executable(qtapp ${headers} ${sources} ${ui_files})

target_include_directories(${PROJECT_NAME} PRIVATE include)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_11)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Widgets)
