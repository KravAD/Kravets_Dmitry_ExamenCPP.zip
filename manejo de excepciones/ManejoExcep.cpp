#include <iostream>
using namespace std;

int main() {
    try {
        throw "Esta es una Excepcion";
    }
    catch (const char *e) {
            cout << "Excepcion capturada: " << e << endl;


        return 0;
    }
}