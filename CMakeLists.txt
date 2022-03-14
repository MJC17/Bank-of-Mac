cmake_minimum_required(VERSION 3.21)
project(Bank_of_Mac)

set(CMAKE_CXX_STANDARD 14)

include_directories(scr)

add_executable(Bank_of_Mac
        scr/Accounts.cpp
        scr/Accounts.h
        scr/main.cpp
        scr/Transaction.cpp
        scr/Transaction.h
        LICENSE
        README.md scr/Loan.h scr/Loan.cpp)
