cmake_minimum_required(VERSION 2.8)

add_executable(task1 src/task1.cpp)
add_executable(task2 src/task2.cpp)
add_executable(task3 src/task3.cpp)
add_executable(task4 src/task4.cpp)
add_executable(task5 src/task5_main.cpp src/task5_func.cpp)
#add_executable(task6 src/task6_main.cpp src/task6_func.cpp)
add_executable(task7 src/task7_main.cpp src/task7_func.cpp)
add_executable(task8 src/task7_main.cpp)

add_library(task8_lib STATIC src/task7_func.cpp)

target_link_libraries(task8 task8_lib)
