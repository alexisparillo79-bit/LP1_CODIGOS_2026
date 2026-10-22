#include <iostream>
using namespace std;

int main() {
    float azucar;
    int clase;

    cout << "Ingrese el nivel de glucosa en sangre (mg/dL): ";
    cin >> azucar;

    if (azucar < 70) clase = 1;
    else if (azucar < 100) clase = 2;
    else if (azucar < 126) clase = 3;
    else clase = 4;

    switch (clase) {
        case 1: cout << "\nResultado: HIPOGLUCEMIA" << endl; break;
        case 2: cout << "\nResultado: GLUCOSA NORMAL" << endl; break;
        case 3: cout << "\nResultado: GLUCOSA ELEVADA / PREDIABETES" << endl; break;
        case 4: cout << "\nResultado: POSIBLE DIABETES" << endl; break;
        default: cout << "Categoria no valida." << endl;
    }

    return 0;
}
