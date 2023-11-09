#include <iostream>
#include <string>
using namespace std;

class Estudiante {
public:
    estudiante (string nombre, int edad, string grado) : nombre_(nombre), edad_(edad), grado_(grado) {}
    string nombre() const { return nombre_; }
    int edad() const { return edad_;}
    string grado() const { return grado_; }
private:
    string nombre_;
    int edad_;
}




