#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int calificaciones[5] = {2, 14, 15, 18, 20};

    cout << "ARREGLO UNIDIMENSIONAL\n";
    cout << "Primera nota indice 0: " << calificaciones[0] << endl;
    cout << "Ultima nota indice 4: " << calificaciones[4] << endl;

    cout << "LA DE TODAS LAS NOTAS";
    for (int ii = 0;ii<5;ii++)
    cout<<"Nota en indice: ["<<ii<<"] "<<calificaciones[ii]<<endl;

    return 0;
}
