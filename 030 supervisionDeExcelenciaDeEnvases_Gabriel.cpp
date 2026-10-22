#include <iostream>
using namespace std;

int main() {
    double TOPE = 0, PISO = 999, acumulado = 0, media = 0, pp = 0;
    int MENORP = 0, aceptados = 0;

    cout << "CONTROL DE CALIDAD EN PLANTA INDUSTRIAL" << endl;

    for (int ii = 1; ii <= 8; ii++) {
        cout << "Ingrese el peso de la botella " << ii << ": ";
        cin >> pp;

        if (pp <= 0) {
            cout << "El peso ingresado debe ser mayor a 0" << endl;
            continue;
        }

        acumulado = acumulado + pp;
        aceptados++;

        if (pp > TOPE) TOPE = pp;
        if (pp < PISO) PISO = pp;
        if (pp < 490) MENORP += 1;
    }

    if (aceptados > 0) {
        media = acumulado / aceptados;
    } else {
        media = 0;
    }

    cout << "Suma total de pesos: " << acumulado << endl;
    cout << "Promedio de pesos: " << media << endl;
    cout << "Peso minimo: " << PISO << endl;
    cout << "Peso maximo: " << TOPE << endl;
    cout << "Total de botellas con bajo peso: " << MENORP << endl;

    return 0;
}
