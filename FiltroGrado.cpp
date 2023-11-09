#include <iostream>
#include <vector>
using namespace std;

vector<Estudiante> filtrar_por_grado(const vector<Estudiante>& estudiantes, string grado) {
    vector<Estudiante> resultado;
    for (const auto& estudiante : estudiantes) {
        if (estudiante.grado() == grado) {
            resultado.pushback(estudiante);
        }
    }
    return resultado;
}