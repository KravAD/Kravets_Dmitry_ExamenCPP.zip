#ifndef EXAMENT1_AUSENCIA_H
#define EXAMENT1_AUSENCIA_H
#include <string>
using namespace std;
class RegistroAsistencia {
public:
    RegistroAsistencia(std::string fecha, std::string estado)
            : fecha_(fecha), estado_(estado) {}

    void mostrar_asistencia() const;

private:
    std::string fecha_;
    std::string estado_;
};


#endif //EXAMENT1_AUSENCIA_H
