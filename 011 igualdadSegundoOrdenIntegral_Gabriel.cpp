#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

int main() {
    double p1, p2, p3;

    cout << "=== Resolucion de ecuaciones de segundo grado (ax^2 + bx + c = 0) ===\n";
    cout << "Ingrese el coeficiente a: ";
    cin >> p1;
    cout << "Ingrese el coeficiente b: ";
    cin >> p2;
    cout << "Ingrese el coeficiente c: ";
    cin >> p3;

    if (p1 == 0) {
        if (p2 == 0) {
            if (p3 == 0)
                cout << "\nCualquier valor de x es solucion (0 = 0).\n";
            else
                cout << "\nNo tiene solucion (ecuacion inconsistente).\n";
        } else {
            double xa = -p3 / p2;
            cout << "\nEs una ecuacion lineal. Solucion: x = " << xa << "\n";
        }
        return 0;
    }

    double delta = p2 * p2 - 4 * p1 * p3;

    cout << "\nDiscriminante: " << delta << "\n";

    if (delta > 0) {
        double raiz1 = (-p2 + sqrt(delta)) / (2 * p1);
        double raiz2 = (-p2 - sqrt(delta)) / (2 * p1);
        cout << "Raices reales y distintas:\n";
        cout << "x1 = " << raiz1 << "\n";
        cout << "x2 = " << raiz2 << "\n";
    } else if (delta == 0) {
        double xa = -p2 / (2 * p1);
        cout << "Raiz real doble:\n";
        cout << "x = " << xa << "\n";
    } else {
        complex<double> raiz1((-p2) / (2 * p1),  sqrt(-delta) / (2 * p1));
        complex<double> raiz2((-p2) / (2 * p1), -sqrt(-delta) / (2 * p1));
        cout << "Raices complejas conjugadas:\n";
        cout << "x1 = " << raiz1.real() << " + " << raiz1.imag() << "i\n";
        cout << "x2 = " << raiz2.real() << " - " << abs(raiz2.imag()) << "i\n";
    }

    return 0;
}
