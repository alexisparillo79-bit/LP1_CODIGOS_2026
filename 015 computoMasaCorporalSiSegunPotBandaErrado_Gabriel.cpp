#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float masa, talla, INDICE;
    int eleccionBanda;

    cout << "Calculo del Indice de masa corporal" << endl;
    cout << "Ingrese su peso (kg): ";
    cin >> masa;
    cout << "Ingrese su talla (m): ";
    cin >> talla;

    if (masa <= 0 || talla <= 0) {
        cout << "\nError: el peso y estatura deben ser mayores a cero\n" << endl;
    }
    else {
        INDICE = masa / pow(talla, 2);

        if (INDICE < 18.5) eleccionBanda = 1;
        else if (INDICE >= 18.5 && INDICE <= 24.9) eleccionBanda = 2;
        else if (INDICE >= 25.00 && INDICE <= 29.9) eleccionBanda = 3;
        else if (INDICE >= 30.00 && INDICE <= 34.9) eleccionBanda = 4;
        else eleccionBanda = 5;

        cout << "Su Indice de masa corporal calculado es: " << INDICE << " kg/m2" << endl;
        cout << "\nDiagnostico: ";

        switch (eleccionBanda) {
            case 1: cout << "Bajo peso" << endl; break;
            case 2: cout << "Peso normal" << endl; break;
            case 3: cout << "Sobrepeso" << endl; break;
            case 4: cout << "Obesidad grado 1" << endl; break;
            case 5: cout << "Obesidad grado 2" << endl; break;
            default: cout << "No se pudo clasificar el IMC" << endl; break;
        }
    }

    return 0;
}
