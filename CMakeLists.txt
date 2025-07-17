cmake_minimum_required(VERSION 3.31)
project(passwordManager)

set(CMAKE_CXX_STANDARD 26)

add_executable(passwordManager main.cpp
        Entry.cpp
        Entry.h
        logic.cpp
        logic.h
        DBmanager.cpp
        DBmanager.h)
target_link_libraries(passwordManager sqlite3)
: