#include "profesores.h"
#include <iostream>
#include "profesores.h"

void profesor::mostrar_info_profesor() const {
    std::cout << "Nombre: " << nombre_ << "\n";
    std::cout << "Edad: " << edad_ << "\n";
    std::cout << "Materia: " << materia_ << "\n";
    std::cout << "Años de experiencia: " << anos_de_experiencia_ << "\n";
}

int main() {
    profesor profesor("Ramon", 60, "Ingeniería de Telecomunicaciones", 30);
    profesor.mostrar_info_profesor();
    return 0;
}