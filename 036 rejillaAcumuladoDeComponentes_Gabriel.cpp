#include <iostream>

using namespace std;

int main() {
    int renglones, cols;

    cout << "Ingrese el numero de filas: ";
    cin >> renglones;
    cout << "Ingrese el numero de columnas: ";
    cin >> cols;

    int rejilla[50][50];

    cout << "Ingrese los elementos" << endl;
    for (int ii = 0; ii < renglones; ii++) {
        for (int jj = 0; jj < cols; jj++) {
            cout << "A [" << ii << "][" << jj << "]: ";
            cin >> rejilla[ii][jj];
        }
    }

    for (int ii = 0; ii < renglones; ii++) {
        for (int jj = 0; jj <  cols; jj++) {

            cout << rejilla[ii][jj] << "\t";
        }
        cout << endl;
    }

    return 0;
}
