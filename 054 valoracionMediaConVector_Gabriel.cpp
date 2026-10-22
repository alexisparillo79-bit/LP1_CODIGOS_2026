#include <iostream>

using namespace std;

int main()
{
    int cant = 0, ii;-
    double acumulado = 0, calificacion;

    cout << "Ingrese la cantidad de notas: "<<endl;
    cin >> cant;

    double calificaciones[cant];

    for (ii = 0; ii < cant; ii++) {
        cout << "Ingrese la nota " << ii + 1 << ": "<<endl;
        cin >> calificacion;
        calificaciones[ii] = calificacion;
        acumulado = acumulado + calificacion;
    }

    cout << "LA LISTA DE TODAS LAS NOTAS"<<endl;
    for (ii = 0; ii < cant; ii++) {
        cout << "Nota en indice [" << ii << "]: " << calificaciones[ii] << endl;
    }

    cout << "El promedio de notas es: " << acumulado / cant << endl;

    return 0;
}
