#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float p1, p2, k;

    cout << "Sistema de calculo de hipotenusa de un triangulo rectangulo!" << endl;
    cout << "Ingrese el valor del cateto a: ";
    cin >> p1;
    cout << "Ingrese el valor del cateto b: ";
    cin >> p2;

    k = sqrt(pow(p1, 2) + pow(p2, 2));

    cout << "La Hipotenusa es: " << k << endl;

    return 0;
}
