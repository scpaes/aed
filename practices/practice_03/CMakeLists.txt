cmake_minimum_required(VERSION 3.26)
project(practice_03)

set(CMAKE_CXX_STANDARD 17)

add_executable(practice_03 pratica3.cpp
        funcoes.h
        arranjo.h
        IndiceInvalido.cpp
        IndiceInvalido.h
        aluno.cpp
        aluno.h)
