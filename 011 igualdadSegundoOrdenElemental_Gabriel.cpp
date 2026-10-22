#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float p1, p2, p3, p4, raiz1, raiz2, PuntoB, PuntoA;

    cout << "Ingrese el valor de a: ";
    cin >> p1;
    cout << "Ingrese el valor de b: ";
    cin >> p2;
    cout << "Ingrese el valor de c: ";
    cin >> p3;

    p4 = (p2 * p2) - (4 * p1 * p3);

    if (p4 > 0) {
        raiz1 = (-p2 + sqrt(p4)) / (2 * p1);
        raiz2 = (-p2 - sqrt(p4)) / (2 * p1);
        cout << "\nLas raices son reales y diferentes:" << endl;
        cout << "x1 = " << raiz1 << endl;
        cout << "x2 = " << raiz2 << endl;
    } else if (p4 == 0) {
        raiz1 = -p2 / (2 * p1);
        cout << "\nLa raiz es real y doble (x1 = x2):" << endl;
        cout << "x1 = x2 = " << raiz1 << endl;
    } else {
        PuntoB = -p2 / (2 * p1);
        PuntoA = sqrt(-p4) / (2 * p1);
        cout << "\nLas raices son complejas:" << endl;
        cout << "x1 = " << PuntoB << " + " << PuntoA << "i" << endl;
        cout << "x2 = " << PuntoB << " - " << PuntoA << "i" << endl;
    }

    return 0;
}
