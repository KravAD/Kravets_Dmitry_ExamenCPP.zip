cmake_minimum_required(VERSION 3.26)
project(ExamenT1)

set(CMAKE_CXX_STANDARD 17)

add_executable(OperacionesBasicas "operaciones básicas/opBas.cpp")
add_executable(Estudiante "gestión de estudiante/estudiante.cpp")
add_executable(OptMemoria optMemoria.cpp)
add_executable(excepciones "manejo de excepciones/ManejoExcep.cpp")
add_executable(Promedio "promedio del estudiante/CalcPromedio.cpp")
add_executable(ausencia "manejo de ausencia/ausencia.cpp" "manejo de ausencia/ausencia.h")
add_executable(FiltroGrado FiltroGrado.cpp)