#include <iostream>
#include <string>
using namespace std;

class Estudiante {
public:
    Estudiante (string nombre, int edad, string grado) : nombre_(nombre), edad_(edad), grado_(grado) {}

    void mostrar_info() const {
        cout << "Nombre: " << nombre_ << endl;
        cout << "Edad: " << edad_ << endl;
        cout << "Grado: " << grado_ << endl;
    }

private:
    string nombre_;
    int edad_;
    string grado_;
};


int main() {
    Estudiante estudiante("Pedro Pascal Ramirez", 18, "Ingeniería de Telecomunicaciones");
    estudiante.mostrar_info();
    return 0;
}

