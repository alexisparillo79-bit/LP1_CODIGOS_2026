#include <iostream>
using namespace std;

int main() {
    float masa, elevacion, masaCorporal;

    cout << "Ingrese su peso en kilogramos: ";
    cin >> masa;
    cout << "Ingrese su altura en metros: ";
    cin >> elevacion;

    if (masa <= 0 || elevacion <= 0) {
        cout << "Error: El peso y la altura deben ser mayores a cero." << endl;
    } else {
        masaCorporal = masa / (elevacion * elevacion);
        cout << "Su Indice de Masa Corporal (IMC) es: " << masaCorporal << endl;

        if (masaCorporal < 18.5) {
            cout << "Clasificacion: Bajo peso" << endl;
        }
        else if (masaCorporal >= 18.5 && masaCorporal <= 24.9) {
            cout << "Clasificacion: Peso normal" << endl;
        }
        else if (masaCorporal >= 25 && masaCorporal <= 29.9) {
            cout << "Clasificacion: Sobrepeso" << endl;
        }
        else if (masaCorporal >= 30 && masaCorporal <= 34.9) {
            cout << "Clasificacion: Obesidad Grado I" << endl;
        }
        else if (masaCorporal >= 35 && masaCorporal <= 39.9) {
            cout << "Clasificacion: Obesidad Grado II" << endl;
        }
        else {
            cout << "Clasificacion: Obesidad Grado III" << endl;
        }
    }

    return 0;
}
