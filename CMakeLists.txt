cmake_minimum_required(VERSION 3.21)
project(Bank_of_Mac)

set(CMAKE_CXX_STANDARD 14)

add_executable(Bank_of_Mac scr/main.cpp
        scr/BankDatabase.cpp scr/BankDatabase.h
        scr/BankClient.cpp scr/BankClient.h
        scr/Date.cpp scr/Date.h
        scr/Account.cpp scr/Account.h
        scr/Checkings.cpp scr/Checkings.h
        scr/CreditCard.h scr/CreditCard.cpp
        scr/Date.cpp scr/Date.h
        scr/Loan.h scr/Loan.cpp
        scr/Mortgage.cpp scr/Mortgage.h
        scr/Savings.cpp scr/Savings.h
        scr/Transaction.cpp scr/Transaction.h)
