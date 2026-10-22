#include <iostream>
using namespace std;

int main() {
    float Gf, Gc;

    cout << "Sistema de conversion de grados Celsius a grados Fahrenheit" << endl;
    cout << "Ingrese grados Celsius: ";
    cin >> Gc;

    Gf = (Gc * 1.8) + 32;

    cout << "La conversion a grados Fahrenheit es: " << Gf;

    return 0;
}
