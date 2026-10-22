#include <iostream>
using namespace std;

int main() {
    double acumulado = 0,LimiteSup=0;
    double gasto=0;

    cout << "CONSUMO DE kWh UN HOGAR DURANTE 7 DIAS" << endl;

    for (int ii = 1; ii <= 7; ii++) {
    	cout << "Ingrese el consumo en kWh dia " << ii << ": "<<endl;
    	cin >> gasto;
        acumulado = acumulado + gasto;

        if (gasto > 15) {
            LimiteSup += 1;
        }
    }

    double media = acumulado / 7
	;

    cout << "Consumo acumulado total de la semana: " << acumulado << endl;
	cout << "El promedio diario: " << media << endl;
	cout << "Cantidad de dias con exceso de consumo: " << LimiteSup << endl;

    return 0;
}
