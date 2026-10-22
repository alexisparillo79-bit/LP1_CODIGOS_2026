#include <iostream>
using namespace std;

int main() {
    int acumulado = 0,calificacion=0,cant;

    cout << "PROMEDIO DE NOTAS" << endl;
    cout << "Leer n notas" << endl;
    cin >> cant;

    for (int ii = 1; ii <= cant; ii++) {
    	cout << "Ingrese la nota " << ii << ": "<<endl;
    	cin >> calificacion;
        acumulado = acumulado + calificacion;
    }

    cout << "La suma de notas es: " << acumulado << endl;
	cout << "El promedio de notas es: " << acumulado/cant << endl;

    return 0;
}
