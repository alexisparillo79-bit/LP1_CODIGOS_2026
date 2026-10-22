#include <iostream>
using namespace std;

int main() {
    double fondo, elevacion, superficie, contorno;

    cout << "Ingrese la base del rectangulo: ";
    cin >> fondo;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> elevacion;

    superficie = fondo * elevacion;
    contorno = 2 * (fondo + elevacion);

    cout << "El area del rectangulo es: " << superficie << endl;
    cout << "El perimetro del rectangulo es: " << contorno << endl;

    return 0;
}
