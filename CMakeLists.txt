cmake_minimum_required(VERSION 3.26)
project(Employee_Management_System_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Employee_Management_System_2 main.cpp
        Employee_Profile.cpp
        Employee_Profile.h
        Employee_Management.cpp
        Employee_Management.h
        Employee_Schedule.cpp
        Employee_Schedule.h
)
