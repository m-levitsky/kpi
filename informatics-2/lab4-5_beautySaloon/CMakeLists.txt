cmake_minimum_required(VERSION 3.13)
project(laba_4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(laba_4
        CashMachine.cpp
        CashMachine.h
        Client.cpp
        Client.h
        Date.cpp
        Date.h
        Employee.cpp
        Employee.h
        Human.cpp
        Human.h
        main.cpp
        Room.cpp
        Room.h
        Schedule.cpp
        Schedule.h
        Service.cpp
        Service.h Cashbox.cpp Cashbox.h Barber.cpp Barber.h)
