#include <iostream>
using namespace std;

int main() {
    float masa, talla, masaCorporal;
    int eleccionBanda;

    cout << "=== CALCULADORA DE INDICE DE MASA CORPORAL ===" << endl;
    cout << "Ingrese su peso en kg: ";
    cin >> masa;
    cout << "Ingrese su estatura en metros: ";
    cin >> talla;

    if (masa <= 0 || talla <= 0) {
        cout << "ERROR: El peso y la estatura deben ser mayores a 0." << endl;
    } else {
        masaCorporal = masa / (talla * talla);
        cout << "Su IMC es: " << masaCorporal << endl;

        if (masaCorporal < 18.5) eleccionBanda = 1;
        else if (masaCorporal >= 18.5 && masaCorporal <= 24.9) eleccionBanda = 2;
        else if (masaCorporal >= 25 && masaCorporal <= 29.9) eleccionBanda = 3;
        else if (masaCorporal >= 30.0 && masaCorporal <= 34.9) eleccionBanda = 4;
        else eleccionBanda = 5;

        switch (eleccionBanda) {
            case 1: cout << "Bajo peso" << endl; break;
            case 2: cout << "Peso Normal" << endl; break;
            case 3: cout << "Sobrepeso" << endl; break;
            case 4: cout << "Obesidad grado I" << endl; break;
            case 5: cout << "Obesidad de grado II" << endl; break;
            default: cout << "No se pudo clasificar el IMC" << endl; break;
        }
    }

    return 0;
}
