#include <iostream>
using namespace std;

int main() {
    int dador, beneficiario;

    cout << "=== COMPATIBILIDAD SANGUINEA ===" << endl;
    cout << "\nTipos de sangre:" << endl;
    cout << "1. O-" << endl;
    cout << "2. O+" << endl;
    cout << "3. A-" << endl;
    cout << "4. A+" << endl;
    cout << "5. B-" << endl;
    cout << "6. B+" << endl;
    cout << "7. AB-" << endl;
    cout << "8. AB+" << endl;

    cout << "\nSeleccione el tipo de sangre del DONANTE: ";
    cin >> dador;
    cout << "Seleccione el tipo de sangre del RECEPTOR: ";
    cin >> beneficiario;

    switch (dador) {
        case 1:
            switch (beneficiario) {
                case 1: case 2: case 3: case 4:
                case 5: case 6: case 7: case 8:
                    cout << "\nCompatible: O- puede donar a todos." << endl; break;
                default: cout << "\nTipo de receptor no valido." << endl;
            }
            break;
        case 2:
            switch (beneficiario) {
                case 2: case 4: case 6: case 8: cout << "\nCompatible." << endl; break;
                default: cout << "\nNo compatible." << endl;
            }
            break;
        case 3:
            switch (beneficiario) {
                case 3: case 4: case 7: case 8: cout << "\nCompatible." << endl; break;
                default: cout << "\nNo compatible." << endl;
            }
            break;
        case 4:
            switch (beneficiario) {
                case 4: case 8: cout << "\nCompatible." << endl; break;
                default: cout << "\nNo compatible." << endl;
            }
            break;
        case 5:
            switch (beneficiario) {
                case 5: case 6: case 7: case 8: cout << "\nCompatible." << endl; break;
                default: cout << "\nNo compatible." << endl;
            }
            break;
        case 6:
            switch (beneficiario) {
                case 6: case 8: cout << "\nCompatible." << endl; break;
                default: cout << "\nNo compatible." << endl;
            }
            break;
        case 7:
            switch (beneficiario) {
                case 7: case 8: cout << "\nCompatible." << endl; break;
                default: cout << "\nNo compatible." << endl;
            }
            break;
        case 8:
            switch (beneficiario) {
                case 8: cout << "\nCompatible." << endl; break;
                default: cout << "\nNo compatible." << endl;
            }
            break;
        default: cout << "\nTipo de sangre del donante no valido." << endl;
    }

    return 0;
}
