#include <iostream>
using namespace std;

int main() {
    float entero;

    cout << "Ingrese un numero: ";
    cin >> entero;

    if (entero > 0) {
        cout << "El numero es positivo." << endl;
    } else if (entero < 0) {
        cout << "El numero es negativo." << endl;
    } else {
        cout << "El numero es neutro." << endl;
    }

    return 0;
}
