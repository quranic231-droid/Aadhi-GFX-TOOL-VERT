cmake_minimum_required(VERSION 3.18.1)

project("aadhi_secure")

add_library(
    native-lib
    SHARED
    native-lib.cpp
)
