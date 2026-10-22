#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float masa, talla, INDICE;

    cout << "Ingrese su peso (kg): ";
    cin >> masa;
    cout << "Ingrese su estatura (m): ";
    cin >> talla;

    if (masa <= 0 || talla <= 0) {
        cout << "\nLos datos no pueden tomar valores negativos o cero\n";
    }
    else {
        INDICE = masa / pow(talla, 2);

        if (INDICE < 18.5) {
            cout << "\nEl sujeto pertenece a la categoria de bajo peso\n";
        }
        else {
            if (INDICE >= 18.5 && INDICE <= 24.9) {
                cout << "\nEl sujeto pertenece a la categoria de peso normal\n";
            }
            else {
                if (INDICE >= 25.0 && INDICE <= 29.9) {
                    cout << "\nEl sujeto pertenece a la categoria de sobrepeso\n";
                }
                else {
                    if (INDICE >= 30.0 && INDICE <= 34.9) {
                        cout << "\nEl sujeto pertenece a la categoria de Obesidad grado I\n";
                    }
                    else {
                        if (INDICE >= 35.0 && INDICE <= 39.9) {
                            cout << "\nEl sujeto pertenece a la categoria de Obesidad grado II\n";
                        }
                        else {
                            cout << "\nEl sujeto pertenece a la categoria de Obesidad grado III\n";
                        }
                    }
                }
            }
        }
    }

    return 0;
}
