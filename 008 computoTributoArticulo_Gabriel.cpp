#include <iostream>
using namespace std;

int main() {
    const double IMPUESTO = 0.18;
    double valorInicial, tributo, valorCierre;

    cout << "Ingrese el precio base del producto: ";
    cin >> valorInicial;

    tributo = valorInicial * IMPUESTO;
    valorCierre = valorInicial + tributo;

    cout << "El IGV (18%) es: " << tributo << endl;
    cout << "El precio final con IGV es: " << valorCierre << endl;

    return 0;
}
