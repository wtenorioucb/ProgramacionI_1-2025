// Materia: Programación I, Paralelo 3
// Autor: Juan Jose Condori Yucra
// Fecha creación: 10/03/2025
// Número de ejercicio: 8
/* Problema planteado:La comercial 'La Estrella' vende n productos en un día, de los cuales factura al
precio de cada uno con un IVA del 13%, y si el monto final se excede en 2500 Bs se
aplica un descuento del 5%. Obtener la suma total de las ventas realizadas en el
día y calcular el pago del IVA del 13% al servicio de Impuestos Nacionales*/
#include <iostream>
using namespace std;
double IVA = 0.13; // IVA del 13%
double DESCUENTO = 0.05; // Descuento del 5% si el total supera 2500 Bs
// Funcion para calcular el precio con IVA
double calcularMontoConIVA(double precio) {
    return precio * (1 + IVA);
}
// Funcion para calcular solo el IVA de un producto
double calcularIVA(double precio) {
    return precio * IVA;
}
// Funcion para calcular el total de ventas y el IVA total
void calcularTotalVentas(int n, double &totalVentas, double &totalIVA) {
    double precio;
    totalVentas = 0;
    totalIVA = 0;
    for (int i = 1; i <= n; i++) {
        cout << "Ingrese el precio del producto " << i << ": ";
        cin >> precio;
        totalVentas += calcularMontoConIVA(precio);
        totalIVA += calcularIVA(precio); // Acumular total de IVA
    }
}
// Funcion para aplicar descuento si el total supera 2500 Bs
double aplicarDescuento(double &totalVentas) {
    double descuento = 0;
    if (totalVentas > 2500) {
        descuento = totalVentas * DESCUENTO;
        totalVentas -= descuento;
    }
    return descuento;
}
int main() {
    int n;
    double totalVentas, totalIVA;
    // Pedir numero de productos vendidos
    cout << "Ingrese el numero de productos vendidos en el dia: ";
    cin >> n;
    // Calcular total de ventas e IVA
    calcularTotalVentas(n, totalVentas, totalIVA);
    // Aplicar descuento si corresponde
    double descuentoAplicado = aplicarDescuento(totalVentas);
    // Mostrar resultados
    cout << "Total de ventas (con IVA): " << totalVentas << " Bs" << endl;
    cout << "Descuento aplicado: " << descuentoAplicado << " Bs" << endl;
    cout << "IVA total a pagar al Servicio de Impuestos Nacionales: " << totalIVA << " Bs" << endl;
    return 0;
}

