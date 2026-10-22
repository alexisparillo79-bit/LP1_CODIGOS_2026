#include <iostream>

using namespace std;

int main()
{
    int ii = 1;
    char contestacion;

    do {
        cout << "Numero: " << ii << endl;
        ii=ii+1;
        cout << "Desea imprimir el siguiente numero? (s/n): ";
        cin >> contestacion;
		} while (contestacion == 'S' || contestacion == 's');

		return 0;

}
