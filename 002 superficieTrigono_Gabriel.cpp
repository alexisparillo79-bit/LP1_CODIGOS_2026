#include <iostream>
using namespace std;

int main() {
    float fondo, elevacion, superficie;

    cout << "Sistema de calculo de area de un triangulo" << endl;
    cout << "Ingrese la base: ";
    cin >> fondo;
    cout << "Ingrese la altura: ";
    cin >> elevacion;

    superficie = (fondo * elevacion) / 2;

    cout << "El area del triangulo es: " << superficie << endl;

    return 0;
}
