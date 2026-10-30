cmake_minimum_required(VERSION 3.20)
project(PRG_04_Calendrier)

set(CMAKE_CXX_STANDARD 20)

add_executable(calendrier
        main.cpp
        affichageCalendrier.cpp
        affichageMois.cpp
        affichageUser.cpp
        affichageCalendrier.h
        affichageMois.h
        affichageUser.h
)