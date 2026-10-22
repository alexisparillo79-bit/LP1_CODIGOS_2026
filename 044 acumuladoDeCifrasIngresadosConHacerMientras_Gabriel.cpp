#include <iostream>
using namespace std;

int main()
{
    int acumulado = 0,cant= 0;

    do{
        cout<<"Numero :"<<cant<<endl;
        cin >> cant;
        acumulado = acumulado + cant;
        cant = cant + 1;
    } while(cant <= 10);

    return 0;
}
