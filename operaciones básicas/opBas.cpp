#include <iostream>
using namespace std;

int suma(int a, int b) {
    return a + b;
}

int main() {
    int a = 5, b = 3;
    cout << "La suma de " << a <<" y" << b <<"es: " << suma(a, b) <<endl;
}
