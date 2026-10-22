#include <iostream>
using namespace std;

int main() {
    float valorUno, valorDos, acumulado, diferencia, producto, cociente;

    cout << "Sistema de operaciones basicas" << endl;
    cout << "Ingresa el primer numero: ";
    cin >> valorUno;
    cout << "Ingresa el segundo numero: ";
    cin >> valorDos;

    acumulado = valorUno + valorDos;
    diferencia = valorUno - valorDos;
    producto = valorUno * valorDos;

    cout << "\nEl resultado de la suma es: " << acumulado << endl;
    cout << "El resultado de la resta es: " << diferencia << endl;
    cout << "El resultado de la multiplicacion es: " << producto << endl;

    if (valorDos != 0) {
        cociente = valorUno / valorDos;
        cout << "El resultado de la division es: " << cociente << endl;
    } else {
        cout << "El resultado de la division es: No se puede dividir entre cero" << endl;
    }

    return 0;
}
