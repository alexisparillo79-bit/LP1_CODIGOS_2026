#include <iostream>
#include <string>
using namespace std;

int main() {
    double azucar;
    int eleccion;
    string etiquetaTipo, desenlace;

    cout << "=== Clasificador de Glucosa en Sangre ===\n\n";
    cout << "Tipo de medicion:\n";
    cout << "1. En ayunas\n";
    cout << "2. Aleatoria\n";
    cout << "3. Postprandial (2h despues de comer)\n";
    cout << "Seleccione una opcion: ";
    cin >> eleccion;

    cout << "Ingrese el valor de glucosa (mg/dL): ";
    cin >> azucar;

    switch (eleccion) {
        case 1:
            etiquetaTipo = "Ayunas";
            if (azucar < 70) desenlace = "Hipoglucemia";
            else if (azucar <= 99) desenlace = "Normal";
            else if (azucar >= 100 && azucar <= 125) desenlace = "Prediabetes (glucosa en ayunas alterada)";
            else desenlace = "Diabetes";
            break;

        case 2:
            etiquetaTipo = "Aleatoria";
            if (azucar < 70) desenlace = "Hipoglucemia";
            else if (azucar <= 139) desenlace = "Normal";
            else if (azucar >= 140 && azucar <= 199) desenlace = "Riesgo elevado / posible prediabetes";
            else desenlace = "Diabetes (requiere confirmacion)";
            break;

        case 3:
            etiquetaTipo = "Postprandial";
            if (azucar < 70) desenlace = "Hipoglucemia";
            else if (azucar <= 139) desenlace = "Normal";
            else if (azucar >= 140 && azucar <= 199) desenlace = "Prediabetes (intolerancia a la glucosa)";
            else desenlace = "Diabetes";
            break;

        default:
            cout << "Opcion invalida.\n";
            return 1;
    }

    cout << "\n--- Resultado ---\n";
    cout << "Tipo de medicion: " << etiquetaTipo << "\n";
    cout << "Glucosa: " << azucar << " mg/dL\n";
    cout << "Clasificacion: " << desenlace << "\n";
    cout << "\nNota: Rangos de referencia generales, no sustituyen diagnostico medico.\n";

    return 0;
}
