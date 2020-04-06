cmake_minimum_required(VERSION 3.15)
project(Seminar3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Seminar3
        Auto.cpp
        Auto.h
        Kunde.cpp
        Kunde.h
        LKW.cpp
        LKW.h
        main.cpp
        PKW.cpp
        PKW.h
        Rental.cpp
        Rental.h)
