#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int estancia = 0, osos = 0, tipoCuarto = 0, esquema = 0;
    double valorClase = 0.0, rebaja = 0.0, TotalOseo = 0.0, esquemaCompleto = 0.0;
    double totalAbonar = 0.0, totalCierre = 0.0;

    cout << "TARIFICADOR DE RESERVAS DE HOTEL" << endl;
    cout << "Ingrese el numero de noches de estadia: ";
    cin >> estancia;

    if (estancia <= 0) {
        cout << "ERROR, el numero de noches debe ser un valor positivo" << endl;
        return 1;
    }

    cout << "Ingrese el numero de huespedes: ";
    cin >> osos;

    if (osos < 1) {
        cout << "ERROR, el numero de huespedes debe ser al menos 1" << endl;
        return 1;
    }

    cout << "Plan de alimentacion (1 = Solo desayuno, 2 = Pension Completa): " << endl;
    cin >> esquema;

    if (esquema != 1 && esquema != 2) {
        cout << "ERROR: plan de alimentacion no valido" << endl;
        return 1;
    }

    cout << "Seleccione el tipo de habitacion" << endl;
    cout << "1: Habitacion Estandar (S/.50.00 por noche)" << endl;
    cout << "2: Habitacion Doble (S/.80.00 por noche)" << endl;
    cout << "3: Suite Ejecutiva (S/.140.00 por noche)" << endl;
    cout << "OPCION: ";
    cin >> tipoCuarto;

    switch (tipoCuarto) {
        case 1: valorClase = 50.00; break;
        case 2: valorClase = 80.00; break;
        case 3: valorClase = 140.00; break;
        default: cout << "ERROR: tipo de habitacion no valida" << endl; return 1;
    }

    if (tipoCuarto == 1 && osos > 1) TotalOseo = (osos - 1) * 15;
    if (tipoCuarto == 2 && osos > 2) TotalOseo = (osos - 2) * 15;
    if (tipoCuarto == 3 && osos > 3) TotalOseo = (osos - 3) * 15;

    if (esquema == 2) esquemaCompleto = 25 * osos;

    totalAbonar = ((valorClase + esquemaCompleto) + TotalOseo) * estancia;

    if (estancia > 5) rebaja = totalAbonar * 0.12;

    totalCierre = totalAbonar - rebaja;

    cout << fixed << setprecision(2);
    cout << "--------------- Desglose ---------------" << endl;

    if (tipoCuarto == 1) cout << "Tipo de habitacion : Habitacion Estandar " << endl;
    if (tipoCuarto == 2) cout << "Tipo de habitacion : Habitacion Doble " << endl;
    if (tipoCuarto == 3) cout << "Tipo de habitacion : Suite Ejecutiva " << endl;

    cout << "Subtotal de alojamiento: S/." << valorClase * estancia << endl;

    if (tipoCuarto == 1 && osos > 1) cout << "Recargo por huespedes adicionales: S/." << TotalOseo * estancia << endl;
    if (tipoCuarto == 2 && osos > 2) cout << "Recargo por huespedes adicionales: S/." << TotalOseo * estancia << endl;
    if (tipoCuarto == 3 && osos > 3) cout << "Recargo por huespedes adicionales: S/." << TotalOseo * estancia << endl;

    cout << "Costo de alimentacion: S/." << esquemaCompleto * estancia << endl;

    if (estancia > 5) {
        cout << "Descuento por estadia larga: S/." << rebaja << endl;
        cout << "Monto total a pagar: S/." << totalCierre << endl;
    } else {
        cout << "Monto total a pagar: S/." << totalAbonar << endl;
    }

    return 0;
}
