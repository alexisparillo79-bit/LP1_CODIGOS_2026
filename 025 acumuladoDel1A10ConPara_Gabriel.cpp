#include <iostream>
using namespace std;

int main() {
    int acumulado = 0;

    cout << "SUMAR NUMEROS DEL 1 AL 10" << endl;

    for (int ii = 1; ii <= 10; ii++) {
    	cout << ii << endl;
        acumulado = acumulado + ii;
    }

    cout << "La suma es: " << acumulado << endl;

    return 0;
}
