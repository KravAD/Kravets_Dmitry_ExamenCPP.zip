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

int main() {
    vector<double> calificaciones = {9,75, 8.5, 3,25, 10};

    calcular_promedio(calificaciones);
    cout << "El promedio es: " << calcular_promedio(calificaciones) << endl;
    return 0;
}