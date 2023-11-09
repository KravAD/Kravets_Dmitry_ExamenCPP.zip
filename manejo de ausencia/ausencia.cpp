#include "ausencia.h"
#include <iostream>
using namespace std;

void RegistroAsistencia::mostrar_asistencia() const {
    std::cout << "Fecha: " << fecha_ << ", Estado: " << estado_ << std::endl;
}

int main() {
    RegistroAsistencia registro("2023-09-01", "No Asistio");
    registro.mostrar_asistencia();

    return 0;
}