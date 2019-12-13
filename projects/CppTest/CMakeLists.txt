cmake_minimum_required(VERSION 3.12)

# set the project name
project(CppTest VERSION 0.1)

add_executable(
    CppTest
    main.cpp
    )

target_compile_features(
    CppTest PUBLIC 
    cxx_std_20
    )