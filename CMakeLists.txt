cmake_minimum_required(VERSION 4.1)
project(ADV3Lab01_02)

set(CMAKE_CXX_STANDARD 17)

add_executable(ADV3Lab01_02 main.cpp
        Account.cpp
        Account.h
        SavingsAccount.cpp
        SavingsAccount.h
        CheckingAccount.cpp
        CheckingAccount.h
        Bank.cpp
        Bank.h)
