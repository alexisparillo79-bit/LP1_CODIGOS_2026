#include <iostream>
using namespace std;

int main() {
    double acumulado = 0;
    int VACIO=0, PARES=0, NONES=0, cant=0;

    cout << "NUMEROS PARES E IMPARES" << endl;

    for (int ii = 1; ii <= 10; ii++) {
    	cout << "Ingrese el numero " << ii << ": "<<endl;
    	cin >> cant;
        acumulado = acumulado + cant;

        if (cant == 0) {
            VACIO += 1;
        }

        if (cant%2 == 0) {
            PARES += 1;
        }

        if (cant%2 == 1) {
            NONES += 1;
        }
    }

    cout << "Suma total de numeros : " << acumulado << endl;
	cout << "Total de numeros pares : " << Q LIM << endl;
	cout << "Total de numeros impares : " << NONES << endl;
	cout << "Total de numeros nulos : " << VACIO << endl;

    return 0;
}
