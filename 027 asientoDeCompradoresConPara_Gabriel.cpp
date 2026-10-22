#include <iostream>
using namespace std;

int main() {
    double acumulado = 0, abono;
    int compradoresVip = 0;

    cout << "REGISTRO DE CLIENTES" << endl;

    for (int ii = 1; ii <= 8; ii++) {
        cout << "Ingrese el monto de pago " << ii << ": " << endl;
        cin >> abono;

        acumulado = acumulado + abono;

        if (abono > 100) {
            compradoresVip += 1;
        }
    }

    double media = acumulado / 8;

    cout << "Total acumulado en caja: S/." << acumulado << endl;
    cout << "El promedio de consumo es: S/." << media << endl;
    cout << "Cantidad total de clientes preferenciales: " << compradoresVip << endl;

    return 0;
}
