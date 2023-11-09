#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Estudiante {
public:
    Estudiante (string nombre, int edad, string grado) : nombre_(nombre), edad_(edad), grado_(grado) {}

    void mostrar_info() const {
        cout << "Nombre: " << nombre_ << endl;
        cout << "Edad: " << edad_ << endl;
        cout << "Grado: " << grado_ << endl;
    }

    void registrar_materias(string materia) {
        materias_.push_back(materia);
    }

    void mostrar_materias() const {
        cout << "Materias añadidas: " << endl;
        for (const auto& materia : materias_) {
            cout << materia << " " << endl;
        }
        cout << endl;
    }

private:
    string nombre_;
    int edad_;
    string grado_;
    vector<string> materias_;
};


int main() {
    Estudiante estudiante("Pedro Pascal Ramirez", 18, "Ingeniería de Telecomunicaciones");
    estudiante.registrar_materias("Mates");
    estudiante.registrar_materias("Ingles");
    estudiante.mostrar_materias();
    estudiante.mostrar_info();
    return 0;
}

