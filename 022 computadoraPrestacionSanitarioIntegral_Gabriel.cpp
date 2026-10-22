#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int anios, modalidad, franjaNoche = 0;
    double valorPrestacion = 0.0;
    double rebajaSenior = 0.0;
    double sobrecostoNoche = 0.0;
    double totalAbonar = 0.0;

    cout << "CALCULADORA DE TRIAJE Y COSTOS DE CONSULTA MEDICA" << endl;
    cout << "Ingrese su edad: ";
    cin >> anios;

    cout << "Es horario de emergencia nocturna? (1 = Si, 0 = No): " << endl;
    cin >> franjaNoche;

    if (anios <= 0) {
        cout << "ERROR, la edad debe ser un valor positivo" << endl;
        return 1;
    }

    cout << "Seleccione el tipo de servicio" << endl;
    cout << "1: Medicina General ($30.00)" << endl;
    cout << "2: Pediatria ($45.00)" << endl;
    cout << "3: Cardiologia ($70.00)" << endl;
    cout << "4: Traumatologia ($60.00)" << endl;
    cout << "OPCION: ";
    cin >> modalidad;

    switch (modalidad) {
        case 1: valorPrestacion = 30.00; break;
        case 2: valorPrestacion = 45.00; break;
        case 3: valorPrestacion = 70.00; break;
        case 4: valorPrestacion = 60.00; break;
        default: cout << "ERROR: Opcion del servicio no valida" << endl; return 1;
    }

    if (modalidad == 2 && anios >= 18) {
        cout << "El paciente tiene 18 anos o mas, debe ser atendido en Medicina General." << endl;
    }

    if (anios >= 65) rebajaSenior = valorPrestacion * 0.25;
    if (franjaNoche == 1) sobrecostoNoche = valorPrestacion * 0.20;

    totalAbonar = (valorPrestacion - rebajaSenior) + sobrecostoNoche;

    cout << fixed << setprecision(2);
    cout << "Costo del servicio: $" << valorPrestacion << endl;
    cout << "Descuento aplicado: $" << rebajaSenior << endl;
    cout << "Recargo nocturno: $" << sobrecostoNoche << endl;
    cout << "Monto final a pagar: $" << totalAbonar << endl;

    return 0;
}
