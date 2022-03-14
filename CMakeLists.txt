cmake_minimum_required(VERSION 3.21)
project(Bank_of_Mac)

set(CMAKE_CXX_STANDARD 14)

include_directories(scr)

add_executable(Bank_of_Mac
        .idea/.gitignore
        .idea/Bank-of-Mac.iml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        scr/Accounts.cpp
        scr/Accounts.h
        scr/main.cpp
        scr/Transaction.cpp
        scr/Transaction.h
        .gitignore
        LICENSE
        README.md)
