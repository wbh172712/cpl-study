
cmake_minimum_required(VERSION 3.26)
project(2023_cpl C)
set(CMAKE_C_STANDARD 11)

add_executable(circle circle.c)
add_executable(sphere sphere.c)
add_executable(mol mol.c)
add_executable(admin admin.c)
target_link_libraries(admin m)
add_executable(admin-scanf admin-scanf.c)
add_executable(admin-scanf-2 admin-scanf-2.c)