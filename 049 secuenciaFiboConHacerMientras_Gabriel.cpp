#include <iostream>
using namespace std;

int main() {
    int cant;
    long long p1 = 0, p2 = 1, p3;
    int ii = 1;

    cout << "Ingrese la cantidad de terminos: ";
    cin >> cant;

    if (cant > 0) {
        do {
            if (ii == 1) {
                cout << p1 << " ";
            } else if (ii == 2) {
                cout << p2 << " ";
            } else {
                p3 = p1 + p2;
                p1 = p2;
                p2 = p3;
                cout << p3 << " ";
            }
            ii++;
        } while (ii <= cant);
    } else {
        cout << "Por favor, ingrese un numero mayor a 0." << endl;
    }

    return 0;
}
