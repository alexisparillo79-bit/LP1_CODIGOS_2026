#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int sector, despacho, comprador;
    float masa;
    double rebajaPrev = 0.0, sobrecostoPrev = 0.0, sancion = 0.0, importeIni;

    cout << "SISTEMA DE COBRO DE ENVIO" << endl;
    cout << "Ingrese la zona de destino " << endl;
    cout << "\n 1: Local/Urbana($5.00)" << endl;
    cout << "\n 2: Nacional($10.00)" << endl;
    cout << "\n 3: America del Sur($20.00)" << endl;
    cout << "\n 4: Internacional/Resto del mundo($35.00)" << endl;
    cin >> sector;

    cout << "Ingrese el peso total del paquete en kilogramos" << endl;
    cin >> masa;

    if (masa <= 0 || masa > 50) {
        cout << "ERROR: El peso del paquete no debe de ser menor a cero (kg) o mayor a 50 (kg) ";
        return 1;
    }
    else {
        cout << "Tipo de entrega Express/Prioritaria (1,si o 0,no)" << endl;
        cin >> despacho;
        cout << "Tipo de cliente: (1,Corporativo/frecuente o 0,Particular) " << endl;
        cin >> comprador;

        if (despacho == 1) sobrecostoPrev = 0.25;
        if (masa > 15) sancion = 12;
        if (comprador == 1) rebajaPrev = 0.10;

        switch (sector) {
            case 1: importeIni = 5; break;
            case 2: importeIni = 10; break;
            case 3: importeIni = 20; break;
            case 4: importeIni = 35; break;
            default: cout << "ERROR: Zona del destino no valido" << endl; return 1;
        }

        double sobrecostoFin = importeIni * sobrecostoPrev;
        double sancionFin = sancion + sobrecostoFin;
        double importesFin = importeIni + sobrecostoFin;
        double rebajaFin = importesFin * rebajaPrev;
        double importeFin = importesFin - rebajaFin;

        cout << fixed << setprecision(2);
        cout << "\n Boleta de Tarifa de envio" << endl;
        cout << "Codigo de zona elegida: " << sector << endl;
        cout << "Costo base por peso: " << importeIni << endl;
        cout << "Multas por exceso de peso: " << sancion << endl;
        cout << "Recargo express: " << sobrecostoFin << endl;
        cout << "Descuento corporativo: " << rebajaFin << endl;
        cout << "Monto Final: " << importeFin << endl;
    }

    return 0;
}
