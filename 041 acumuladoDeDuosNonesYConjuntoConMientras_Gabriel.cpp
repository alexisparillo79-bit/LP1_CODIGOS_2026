#include <iostream>
using namespace std;

int main() {
    int conteo = 1;
    int acumPares = 0;
    int acumNones = 0;
    int acumulado = 0;

    while(conteo <= 10) {
        cout << "Numero: " << conteo << endl;
        if (conteo%2 != 0)
		acumNones = acumNones + conteo;
		if (conteo%2 == 0)
		acumPares = acumPares + conteo;
		acumulado = acumulado + conteo;
        conteo = conteo + 1;
    }

    cout << "La suma total  de los numeros pares es: " << acumPares << endl;
    cout << "La suma total  de los numeros impares es: " << acumNones << endl;
    cout << "La suma total  de los numeros es: " << acumulado << endl;

    return 0;
}
