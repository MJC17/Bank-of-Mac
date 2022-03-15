cmake_minimum_required(VERSION 3.21)
project(Bank_of_Mac)

set(CMAKE_CXX_STANDARD 14)

include_directories(scr)

add_executable(Bank_of_Mac
        scr/main.cpp
        scr/Transaction.cpp
        scr/Transaction.h
        LICENSE
        README.md scr/Loan.h scr/Loan.cpp scr/Savings.cpp scr/Savings.h scr/Date.cpp scr/Date.h scr/Mortgage.cpp scr/Mortgage.h scr/CreditCard.cpp scr/CreditCard.h)
