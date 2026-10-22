#include <iostream>
using namespace std;

int main() {
    int entero;

    cout << "CONVERTIR NUMEROS A PALABRAS (1 - 100)" << endl;
    cout << "\nIngrese un numero entre 1 y 100: ";
    cin >> entero;

    if (entero < 1 || entero > 100) {
        cout << "ERROR: El numero ingresado esta fuera de rango permitido (1 - 100)." << endl;
    }
    else {
        cout << "El numero en palabras es: ";
        if (entero == 100) cout << "Cien";
        else if (entero >= 1 && entero <= 9) {
            switch (entero) {
                case 1: cout << "Uno"; break;
                case 2: cout << "Dos"; break;
                case 3: cout << "Tres"; break;
                case 4: cout << "Cuatro"; break;
                case 5: cout << "Cinco"; break;
                case 6: cout << "Seis"; break;
                case 7: cout << "Siete"; break;
                case 8: cout << "Ocho"; break;
                case 9: cout << "Nueve"; break;
            }
        }
        else if (entero >= 10 && entero <= 29) {
            switch (entero) {
                case 10: cout << "Diez"; break;
                case 11: cout << "Once"; break;
                case 12: cout << "Doce"; break;
                case 13: cout << "Trece"; break;
                case 14: cout << "Catorce"; break;
                case 15: cout << "Quince"; break;
                case 16: cout << "Dieciseis"; break;
                case 17: cout << "Diecisiete"; break;
                case 18: cout << "Dieciocho"; break;
                case 19: cout << "Diecinueve"; break;
                case 20: cout << "Veinte"; break;
                case 21: cout << "Veintiuno"; break;
                case 22: cout << "Veintidos"; break;
                case 23: cout << "Veintitres"; break;
                case 24: cout << "Veinticuatro"; break;
                case 25: cout << "Veinticinco"; break;
                case 26: cout << "Veintiseis"; break;
                case 27: cout << "Veintisiete"; break;
                case 28: cout << "Veintiocho"; break;
                case 29: cout << "Veintinueve"; break;
            }
        }
        else {
            int decenasN = entero / 10;
            int piezas = entero % 10;
            switch (decenasN) {
                case 3: cout << "Treinta"; break;
                case 4: cout << "Cuarenta"; break;
                case 5: cout << "Cincuenta"; break;
                case 6: cout << "Sesenta"; break;
                case 7: cout << "Setenta"; break;
                case 8: cout << "Ochenta"; break;
                case 9: cout << "Noventa"; break;
            }
            if (decenasN >= 3 && piezas > 0) cout << " y ";
            switch (piezas) {
                case 1: cout << "uno"; break;
                case 2: cout << "dos"; break;
                case 3: cout << "tres"; break;
                case 4: cout << "cuatro"; break;
                case 5: cout << "cinco"; break;
                case 6: cout << "seis"; break;
                case 7: cout << "siete"; break;
                case 8: cout << "ocho"; break;
                case 9: cout << "nueve"; break;
            }
        }
        cout << endl;
    }

    cout << "Presione ENTER para finalizar." << endl;
    cin.ignore();
    cin.get();
    return 0;
}
