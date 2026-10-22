#include <iostream>
using namespace std;

int main() {
    int entero;

    cout << "Ingrese un numero: ";
    cin >> entero;

    if (entero == 0) {
        cout << "El numero es nulo." << endl;
    } else if (entero % 2 == 0) {
        cout << "El numero es par" << endl;
    } else {
        cout << "El numero es impar" << endl;
    }

    return 0;
}
