#include <iostream>

using namespace std;

int main()
{
    int renglones, cols;
    float acumulado;

    cout << "Ingrese la cantidad de filas: ";
    cin >> renglones;
    cout << "Ingrese la cantidad de columnas: ";
    cin >> cols;

    int rejilla[renglones][cols];

    for (int ii = 0; ii < renglones; ii++) {
        for (int jj = 0; jj < cols; jj++) {
            cout << "Ingrese el valor para [" << ii << "][" << jj << "]: ";
            cin >> rejilla[ii][jj];
            acumulado+= rejilla[ii][jj];
        }
    }

    cout << endl;

    cout << "ARREGLO BIDIMENSIONAL"<<endl;

    cout << endl;

    for (int ii = 0; ii < renglones; ii++) {
        for (int jj = 0; jj < cols; jj++) {
            cout << rejilla[ii][jj] << "\t ";
        }
        cout << endl;
    }

    cout << "La suma de todos los elementos es: " << acumulado << endl;
}
