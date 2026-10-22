#include <iostream>
using namespace std;

int main()
{
    double calificacion,cant,ii=0;

    cout<<"Ingrese la cantidad de notas"<<endl;
    cin >> cant;

    do {
        cout << "Ingrese la nota del Examen Parcial (0 a 20) "<<ii<<" : "<<endl;
        cin >> calificacion;

        if (calificacion < 0 || calificacion > 20) {
            cout <<endl<< "La nota ingresada no es correcta " << endl;
        }
        if (calificacion >= 10.5 && calificacion <= 20) {
        cout << "Estado: Aprobado" << endl;
    	}
    	if (calificacion >= 0 && calificacion <=5 10.4) {
        cout << "Estado: Desprobado" << endl;
    	}
		else {
        cout << "nota no valida" << endl;
   		}
   		 ii = ii + 1;
    } while (ii<=cant);

    return 0;
}
