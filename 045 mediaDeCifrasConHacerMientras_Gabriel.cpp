#include <iostream>
using namespace std;

int main()
{
    int ii = 1, acumulado = 0,cant= 0, cifra;

    cout << "ingrese la cantidad de datos : ";
    cin >> cant;

    do{
        cout<<"Ingrese numero :"<<ii<<endl;
        cin >> cifra;
        acumulado = acumulado + cifra;
        ii=ii+1;
    }while(ii<=cant);

	cout<< "Suma total = "<<acumulado<<endl;
	cout<<"Promedio = "<<acumulado/cant<<endl;
    return 0;
}
