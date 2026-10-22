#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int automotor, tarjeta;
    float masa;
    double rebajaPrev = 0.0;
    double sancion = 0.0;
    double importeIni;

    cout << "SISTEMA DE COBRO DE PEAJE" << endl;
    cout << "Ingrese la categoria del vehiculo " << endl;
    cout << "\n 1: Auto/Camioneta($3.00)" << endl;
    cout << "\n 2: Autobus($6.00)" << endl;
    cout << "\n 3: Camion de carga($10.00)" << endl;
    cin >> automotor;

    cout << "Ingrese el peso total del vehiculo en toneladas" << endl;
    cin >> masa;

    if (masa <= 0) {
        cout << "ERROR: El peso del vehiculo ingresado debe de ser mayor a cero ";
        return 1;
    }
    else {
        cout << "Cuenta con pase electronico (Telepeaje)? (1,si o 0,no)" << endl;
        cin >> tarjeta;

        if (tarjeta == 1) rebajaPrev = 0.15;
        if (automotor == 3 && masa >= 12) sancion = (masa - 12) * 2.5;

        switch (automotor) {
            case 1: importeIni = 3; break;
            case 2: importeIni = 6; break;
            case 3: importeIni = 10; break;
            default: cout << "ERROR: Codigo del servicio no valido" << endl; return 1;
        }

        double rebajaFin = importeIni * rebajaPrev;
        double importeFin = importeIni - rebajaFin + sancion;

        cout << fixed << setprecision(2);
        cout << "\n Boleta de Peaje" << endl;
        cout << "Monto Original: " << importeIni << endl;
        cout << "Descuento total: " << rebajaFin << endl;
        cout << "Multas por exceso de peso: " << sancion << endl;
        cout << "Monto Final: " << importeFin << endl;
    }

    return 0;
}
