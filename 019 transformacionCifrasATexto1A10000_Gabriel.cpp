#include <iostream>
#include <string>
using namespace std;

string piezas(int cant) {
    switch (cant) {
        case 1: return "uno";
        case 2: return "dos";
        case 3: return "tres";
        case 4: return "cuatro";
        case 5: return "cinco";
        case 6: return "seis";
        case 7: return "siete";
        case 8: return "ocho";
        case 9: return "nueve";
        default: return "";
    }
}

string decenasN(int cant) {
    if (cant < 10) return piezas(cant);
    else if (cant >= 10 && cant < 20) {
        switch (cant) {
            case 10: return "diez";
            case 11: return "once";
            case 12: return "doce";
            case 13: return "trece";
            case 14: return "catorce";
            case 15: return "quince";
            case 16: return "dieciseis";
            case 17: return "diecisiete";
            case 18: return "dieciocho";
            case 19: return "diecinueve";
            default: return "";
        }
    }
    else if (cant >= 20 && cant < 30) {
        if (cant == 20) return "veinte";
        return "veinti" + piezas(cant - 20);
    }
    else {
        int idxD = cant / 10;
        int idxU = cant % 10;
        string textoDecena = "";
        switch (idxD) {
            case 3: textoDecena = "treinta"; break;
            case 4: textoDecena = "cuarenta"; break;
            case 5: textoDecena = "cincuenta"; break;
            case 6: textoDecena = "sesenta"; break;
            case 7: textoDecena = "setenta"; break;
            case 8: textoDecena = "ochenta"; break;
            case 9: textoDecena = "noventa"; break;
        }
        if (idxU == 0) return textoDecena;
        return textoDecena + " y " + piezas(idxU);
    }
}

string cientos(int cant) {
    if (cant == 100) return "cien";
    else if (cant > 100 && cant < 1000) {
        int idxC = cant / 100;
        int sobrante = cant % 100;
        string textoCentena = "";
        switch (idxC) {
            case 1: textoCentena = "ciento"; break;
            case 2: textoCentena = "doscientos"; break;
            case 3: textoCentena = "trescientos"; break;
            case 4: textoCentena = "cuatrocientos"; break;
            case 5: textoCentena = "quinientos"; break;
            case 6: textoCentena = "seiscientos"; break;
            case 7: textoCentena = "setecientos"; break;
            case 8: textoCentena = "ochocientos"; break;
            case 9: textoCentena = "novecientos"; break;
        }
        if (sobrante == 0) return textoCentena;
        return textoCentena + " " + decenasN(sobrante);
    }
    else return decenasN(cant);
}

string millares(int cant) {
    if (cant == 1000) return "mil";
    else if (cant > 1000 && cant <= 10000) {
        int idxM = cant / 1000;
        int sobrante = cant % 1000;
        string textoMillar = "";
        if (idxM == 1) textoMillar = "mil";
        else if (idxM == 10) return "diez mil";
        else textoMillar = piezas(idxM) + " mil";
        if (sobrante == 0) return textoMillar;
        return textoMillar + " " + cientos(sobrante);
    }
    else return cientos(cant);
}

string enteroATexto(int cant) {
    if (cant == 10000) return "diez mil";
    else if (cant >= 1000 && cant < 10000) return millares(cant);
    else if (cant >= 1 && cant < 1000) return cientos(cant);
    else return "Numero fuera de rango";
}

int main() {
    for (int ii = 1; ii <= 10000; ii++) {
        cout << ii << ": " << enteroATexto(ii) << endl;
    }
    return 0;
}
