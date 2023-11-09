#ifndef EXAMENT1_PROFESORES_H
#define EXAMENT1_PROFESORES_H
#include <iostream>
#include <string>
using namespace std;
class profesor {
    public:
        profesor(std::string nombre, int edad, std::string materia, int anos_de_experiencia)
                : nombre_(nombre), edad_(edad), materia_(materia), anos_de_experiencia_(anos_de_experiencia) {}

        void mostrar_info_profesor() const;

private:
        string nombre_;
        int edad_;
        string materia_;
        int anos_de_experiencia_;
};


#endif //EXAMENT1_PROFESORES_H
