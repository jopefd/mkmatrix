cmake_minimum_required(VERSION 3.2)
project (mkmatrix VERSION 1.0.0 LANGUAGES CXX)

include_directories(
  "include"
  "src"
)

add_executable(
  mkmatrix
  src/main.cpp
)
               
target_compile_features(mkmatrix PUBLIC cxx_std_17)
