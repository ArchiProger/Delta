cmake_minimum_required(VERSION 3.16)
project(Delta)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_PREFIX_PATH "/home/arthur/Qt/5.12.11/gcc_64/lib/cmake/")
set(CMAKE_AUTOUIC_SEARCH_PATHS "res/ui")

find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

qt5_wrap_ui(Delta res/ui/mainwindow.ui)

set(SOURCE_FILES
        src/main.cpp
        src/MainWindow/MainWindow.cpp
        src/MainWindow/MainWindow.h
        qres.qrc
        )

add_executable(Delta ${SOURCE_FILES})

target_link_libraries(Delta Qt5::Widgets Qt5::Core Qt5::Gui)