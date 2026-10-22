#include <iostream>
using namespace std;

int main() {
    const double NUMPI = 3.14159265358979;
    double ejeLargo, ejeCorto, superficie;

    cout << "Ingrese el semieje mayor: ";
    cin >> ejeLargo;
    cout << "Ingrese el semieje menor: ";
    cin >> ejeCorto;

    superficie = NUMPI * ejeLargo * ejeCorto;

    cout << "El area de la elipse es: " << superficie << endl;

    return 0;
}
