cmake_minimum_required(VERSION 3.31)
project(passwordManager)

set(CMAKE_CXX_STANDARD 26)
find_package(Qt6 REQUIRED COMPONENTS Widgets)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_executable(passwordManager main.cpp
        Entry.cpp
        Entry.h
        DBmanager.cpp
        DBmanager.h
        MainWindow.cpp
        MainWindow.h
        addEntryWindow.cpp
        addEntryWindow.h)
target_link_libraries(passwordManager
        sqlite3
        Qt6::Widgets
)
