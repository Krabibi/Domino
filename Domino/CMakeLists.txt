cmake_minimum_required(VERSION 3.29)
project(tp10 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(tp10
    domino.c
    domino.h
    paquet.c
    paquet.h
        joueur.c
        joueur.h
        jeu.c
        jeu.h
)
