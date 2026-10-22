#include <iostream>
using namespace std;

int main() {
    double acumulado = 0, grados;
    int avisoTempElevada = 0;

    cout << "TEMPERATURA DE UN INVERNADERO" << endl;
    cout << "Lecturas cada 3 horas (5 registros en total)" << endl;

    for (int ii = 1; ii <= 5; ii++) {
        cout << "Ingrese la temperatura registrada " << ii << ": " << endl;
        cin >> grados;

        acumulado = acumulado + grados;

        if (grados > 28) {
            avisoTempElevada += 1;
        }
    }

    double media = acumulado / 8;

    cout << "El promedio de temperatura es: " << media << "C"<< endl;
    cout << "Cantidad total de alertas por calor extremo: " << avisoTempElevada << endl;

    return 0;
}
