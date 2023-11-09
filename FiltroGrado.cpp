#include <vector>
#include <iostream>
#include <string>
#include "estudiante.h"
using namespace std;

vector<estudiante> filtrar_por_grado(const vector<estudiante>& estudiantes, const string& grado) {
    vector<estudiante> resultado;
    for (const auto& estudiante : estudiantes) {
        if (estudiante.getGrado() == grado) {
            resultado.push_back(estudiante);
        }
    }
    return resultado;
}

int main() {
    vector<estudiante> estudiantes = {
            estudiante("Juan", 20, "Ingeniería en Sistemas"),
            estudiante("Ana", 19, "Ingeniería en Sistemas"),
            estudiante("Pedro", 21, "Ingeniería Civil")
    };

    string grado = "Ingeniería en Sistemas";
    vector<estudiante> filtrados = filtrar_por_grado(estudiantes, grado);

    cout << "Estudiantes en " << grado << ":\n";
    for (const auto& estudiante : filtrados) {
        estudiante.mostrar_info();
    }

    return 0;
}