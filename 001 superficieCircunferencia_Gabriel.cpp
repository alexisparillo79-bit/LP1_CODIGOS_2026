#include <iostream>
using namespace std;

int main() {
    const double NUMPI = 3.14159265358979;
    double semidiametro, superficie;

    cout << "Ingrese el radio del circulo: ";
    cin >> semidiametro;

    superficie = NUMPI * semidiametro * semidiametro;

    cout << "El area del circulo es: " << superficie << endl;

    return 0;
}
