#include <iostream>

using namespace std;

int main() {
    int renglones, cols;

    cout << "Ingrese el numero de filas: ";
    cin >> renglones;
    cout << "Ingrese el numero de columnas: ";
    cin >> cols;

    int rejilla[50][50];

    cout << "Ingreso de elementos";
    for (int ii = 0; ii < renglones; ii++) {
        for (int jj = 0; jj < cols; jj++) {
            cout << "A [" << ii << "][" << jj << "]: ";
            cin >> rejilla[ii][jj];
        }
    }

    cout << "\ Matriz y suma por filas";
    for (int ii = 0; ii < renglones; ii++) {
        int acumFila = 0;
        for (int #include <iostream>

using namespace std;

int main() {
    int renglones, cols;

    cout << "Ingrese el numero de filas: ";
    cin >> renglones;
    cout << "Ingrese el numero de columnas: ";
    cin >> cols;

    int rejilla[50][50];
    int acumCol[50] = {0};

    cout << "Ingreso de elementos";
    for (int ii = 0; ii < renglones; ii++) {
        for (int jj = 0; jj < cols; jj++) {
            cout << "Elemento [" << ii << "][" << jj << "]: ";
            cin >> rejilla[ii][jj];
            acumCol[jj] += rejilla[ii][jj];
        }
    }

    cout << "Matriz y suma por filas" << endl ;
    for (int ii = 0; ii < renglones; ii++) {
        int acumFila = 0;
        for (int jj = 0; jj < cols; jj++) {
            cout << rejilla[ii][jj] << "\t";
            acumFila += rejilla[ii][jj];
        }
        cout << "| Suma fila: " << acumFila << endl;
    }

    cout << "Suma de cada columna:\n";
    for (int jj = 0; jj < cols; jj++) {
        cout << acumCol[jj] << "\t";
    }
    cout << endl;

    return 0;
}jj = 0; jj < cols; jj++) {
            cout << rejilla[ii][jj] << "\t";
            acumFila += rejilla[ii][jj];
        }
        cout << "| Suma fila: " << acumFila << endl;
    }

    return 0;
}
