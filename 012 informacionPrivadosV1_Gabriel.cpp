#include <iostream>
#include <string>
using namespace std;

int main() {
    string apodo, segundoNombre;
    int anios;

    cout << "Ingresa tu nombre: ";
    cin >> apodo;
    cout << "Ingresa tu apellido: ";
    cin >> segundoNombre;
    cout << "Ingresa tu edad: ";
    cin >> anios;

    cout << "Nombre completo: " << apodo << " " << segundoNombre << endl;
    cout << "Edad: " << anios << " anios" << endl;

    return 0;
}
