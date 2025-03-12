#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double calcularDescuento(double&);
void obtenerSuma(double&, double);
double calcularIVA (double);

int main () {
    int n;
    cout << "Ingrese la cantidad de ventas: " << endl;
    cin >> n;
    srand(time(NULL));
    double total = 0.0;
    for(int i = 1; i <= n; i++){
        int precio = rand() % (31) + 20;
        cout << "Ingrese la cantidad del producto " << i << ":\n";
        int cant;
        cin >> cant;

        double monto = cant * precio;
        cout << "Precio: " << monto << endl;
        double descuento = calcularDescuento(monto);
        cout << "Descuento: " << descuento << endl;
        cout << "El precio total es: " << monto << endl;
        obtenerSuma(total, monto);
    }

    cout << "===================\n";
    cout << "Total de ganancias: " << total << endl;
    double iva = calcularIVA(total);
    cout << "Impuesto IVA: " << iva << endl;
    cout << "Ganancias descontando impuestos: " << total - iva << endl;
    return 0;
}

double calcularDescuento(double &monto){
    if(monto > 2500.0) {
        double descuento = monto * 0.05;
        monto = monto - descuento;
        return descuento;
    } else {
        return 0.0;
    }
}

void obtenerSuma(double &total, double monto) {
    total += monto;
}

double calcularIVA (double total) {
    return total * 0.13;
}