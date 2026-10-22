#include <iostream>
using namespace std;

int main()
{
    double importe, balanceGlobal=0;
    char salida;

    do{
    	cout << "ingrese el monto que desea ingresar (S/.1, S/.2, S/.5, S/.10, S/.20) : S/.";
    	cin >> importe;

    	if (importe != 1 && importe != 2 && importe != 5 && importe != 10 && importe != 20){
    	cout << "El valor ingresado no es correcto"<<endl;
    	break;
		}
        balanceGlobal = balanceGlobal + importe;
        cout << "Saldo actual : S/."<<balanceGlobal<<endl;

        cout << "Desea ingresar mas dinero? (S = si, N = no): "<<endl;
        cin >> salida;
    }while(salida == 'S' || salida == 's');

	cout<< "Saldo total = "<<balanceGlobal<<endl;
    return 0;
}
