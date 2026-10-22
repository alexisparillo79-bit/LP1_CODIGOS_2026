#include <iostream>
using namespace std;

int main() {
    int p1, p2, p3;

    cout << "Ingrese el valor de A: ";
    cin >> p1;
    cout << "Ingrese el valor de B: ";
    cin >> p2;
    cout << "Ingrese el valor de C: ";
    cin >> p3;

    if (p1 >= p2) {
        if (p1 >= p3) {
            cout << "El numero mayor es: " << p1 << endl;
        } else {
            cout << "El numero mayor es: " << p3 << endl;
        }
    }
    else {
        if (p3 >= p2) {
            cout << "El numero mayor es: " << p3 << endl;
        } else {
            cout << "El numero mayor es: " << p2 << endl;
        }
    }

    return 0;
}
