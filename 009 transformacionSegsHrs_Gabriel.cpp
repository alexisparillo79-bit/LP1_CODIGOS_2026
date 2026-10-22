#include <iostream>
using namespace std;

int main() {
    int segsGlobales, hrs, mins, segs;

    cout << "Ingrese la cantidad de segundos: ";
    cin >> segsGlobales;

    hrs = segsGlobales / 3600;
    mins = (segsGlobales % 3600) / 60;
    segs = segsGlobales % 60;

    cout << "Equivale a: " << hrs << " horas, "
         << mins << " minutos y "
         << segs << " segundos" << endl;

    return 0;
}
