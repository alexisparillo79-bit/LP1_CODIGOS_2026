#include <iostream>

using namespace std;

int main()
{
    int ii = 1, tablaDe;
    char contestacion;

    cout << "Tablas de multiplicar "<<endl;
    cout << "De que numero desea la tabla de multiplicar "<<endl;
    cin >> tablaDe;
    do {
         cout << "Tabla del " << tablaDe << endl;

        for (int ii = 1; ii <= 10; ii++) {
            cout << tablaDe << " x " << ii << " = " << (tablaDe * ii) << endl;
        }

        cout << "Desea imprimir el siguiente numero? (s/n): "<<endl;
        cin >> contestacion;

        	tablaDe += 1;

		} while (contestacion == 'S' || contestacion == 's');

		return 0;

}
