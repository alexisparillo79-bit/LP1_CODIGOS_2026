#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double catetoA, catetoO, diagonal;

    cout << "Ingrese el cateto ca: ";
    cin >> catetoA;
    cout << "Ingrese el cateto co: ";
    cin >> catetoO;

    diagonal = sqrt(catetoA * catetoA + catetoO * catetoO);

    cout << "La hipotenusa es: " << diagonal << endl;

    return 0;
}
