#include <iostream>
#include <vector>
using namespace std;

double calcular_promedio(const vector<double>& calificaciones) {
    int suma = 0;
    for (int calificacion : calificaciones) {
        suma += calificacion;
    }
    return static_cast<double>(suma) / calificaciones.size();
}