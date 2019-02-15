cmake_minimum_required(VERSION 3.7)
project(myProject2)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Node.h Stack.h Queue.h BankClients.h BankClients.cpp)
add_executable(myProject2 ${SOURCE_FILES})