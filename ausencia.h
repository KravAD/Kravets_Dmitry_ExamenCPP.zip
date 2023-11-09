#ifndef EXAMENT1_AUSENCIA_H
#define EXAMENT1_AUSENCIA_H
#include <string>

class ausencia {
public:
    RegistroAusencia(string fecha, string estado) : fecha_(fecha), estado_(estado) {}
    void mostrar_ausencia() const;

private:
    string fecha;
    string estado;

};


#endif //EXAMENT1_AUSENCIA_H
