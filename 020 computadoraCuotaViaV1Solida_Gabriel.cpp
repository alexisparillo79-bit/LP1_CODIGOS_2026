#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double masaV;
    int clase;
    double valorClase = 0.0;
    double rebajaTele = 0.0;
    double sancionPeso = 0.0;
    int tarjetaTele = 0;
    double totalAbonar = 0.0;

    cout << "CALCULADORA DE PEAJE Y EXCESO DE CARGA" << endl;
    cout << "Ingrese el peso total del vehiculo en toneladas: ";
    cin >> masaV;

    if (masaV <= 0) {
        cout << "ERROR, el peso del vehiculo debe ser un valor positivo" << endl;
        return 1;
    }

    cout << "Cuenta con pase electronico de telepeaje (1 = Si, 0 = No): " << endl;
    cin >> tarjetaTele;

    cout << "Seleccione la categoria del vehiculo" << endl;
    cout << "1: Auto / camioneta ($3.00)" << endl;
    cout << "2: Autobus ($6.00)" << endl;
    cout << "3: Camion de carga ($10.00)" << endl;
    cout << "OPCION: ";
    cin >> clase;

    switch (clase) {
        case 1: valorClase = 3.00; break;
        case 2: valorClase = 6.00; break;
        case 3: valorClase = 10.00; break;
        default: cout << "ERROR: Opcion de categoria no valida" << endl; return 1;
    }

    if (clase == 3 && masaV >= 12) {
        sancionPeso = (masaV - 12) * 2.5;
    }

    if (tarjetaTele == 1) {
        rebajaTele = valorClase * 0.15;
    }

    totalAbonar = (valorClase - rebajaTele) + sancionPeso;

    cout << fixed << setprecision(2);
    cout << "--------------- Desglose ---------------" << endl;
    cout << "Costo base de la categoria: $" << valorClase << endl;
    cout << "Descuento aplicado por pase de Telepeaje: $" << rebajaTele << endl;
    cout << "Penalizacion por exceso de peso: $" << sancionPeso << endl;
    cout << "Monto final a pagar: $" << totalAbonar << endl;

    return 0;
}
