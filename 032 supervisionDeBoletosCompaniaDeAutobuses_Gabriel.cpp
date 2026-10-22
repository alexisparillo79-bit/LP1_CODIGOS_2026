#include <iostream>
using namespace std;

int main() {
    double acumulado = 0, abono;
    int cuotaIntegra = 0;

    cout << "EMPRESA DE BUSES RAPIDO DEL SUR" << endl;
    cout << "CONTROL DE PASAJES" << endl;

    for (int ii = 1; ii <= 10; ii++) {
        cout << "Ingrese el monto pagado por el pasajero " << ii << ": ";
        cin >> abono;

        acumulado = acumulado + abono;

        if (abono == 15) {
            cuotaIntegra += 1;
        }
    }

    double media = acumulado / 10;

    cout << "\n--- Resumen del viaje ---" << endl;
    cout << "Dinero total acumulado en caja: S/." << acumulado << endl;
    cout << "Costo promedio pagado por pasajero: S/." << media << endl;
    cout << "Cantidad total de pasajeros con tarifa completa: " << cuotaIntegra << endl;

    return 0;
}5
