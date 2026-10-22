#include <iostream>
using namespace std;

int main() {
    const double NUMPI = 3.14159265358979;
    double semidiametro, superficie;

    cout << "Ingrese el radio de la esfera: ";
    cin >> semidiametro;

    superficie = 4 * NUMPI * semidiametro * semidiametro;

    cout << "El area de la esfera es: " << superficie << endl;

    return 0;
}
