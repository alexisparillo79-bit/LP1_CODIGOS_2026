#include <iostream>
using namespace std;

int main() {
    float calificacion;

    cout << "SISTEMA DE EVALUACION DE NOTAS (ESCALA 0 - 20) " << endl;
    cout << "Ingrese su nota final (0 - 20): ";
    cin >> calificacion;

    if (calificacion < 0 || calificacion > 20) {
        cout << "ERROR: La nota ingresada no es valida. Debe escribir entre 0 y 20" << endl;
        return 1;
    }

    if (calificacion >= 18) cout << "Estado: Excelente (Sobresaliente)." << endl;
    else if (calificacion >= 14) cout << "Estado: Aprobado (Bueno)." << endl;
    else if (calificacion >= 11) cout << "Estado: Aprobado (Regular)." << endl;
    else cout << "Estado: Desaprobado" << endl;

    int grado;
    if (calificacion >= 18) grado = 1;
    else if (calificacion >= 14) grado = 2;
    else if (calificacion >= 11) grado = 3;
    else grado = 4;

    switch (grado) {
        case 1: cout << "Categoria A: Postulante de cuadro de honor o beca" << endl; break;
        case 2: cout << "Categoria B: Buen rendimiento academico" << endl; break;
        case 3: cout << "Categoria C: Aprobado, pero requiere reforzamiento" << endl; break;
        case 4: cout << "Categoria D: Desaprobado, requiere recuperacion" << endl; break;
    }

    return 0;
}
