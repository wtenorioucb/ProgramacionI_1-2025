// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 05/03/2025
// Número de ejercicio: 9
// Problema planteado: Leer un valor que represente una cierta cantidad de dinero

#include <iostream>
using namespace std;

int transformar(int monto, int valor, string texto);

int main()
{
    int monto = 0;
    cout << "Ingrese el monto total de dinero: ";
    cin >> monto;

    // Llamamos a la función para cada tipo de billete y moneda
    monto = transformar(monto, 200, "billete");
    monto = transformar(monto, 100, "billete");
    monto = transformar(monto, 50, "billete");
    monto = transformar(monto, 10, "billete");
    monto = transformar(monto, 5, "moneda");
    monto = transformar(monto, 2, "moneda");
    monto = transformar(monto, 1, "moneda");

    return 0;
}

// Función que calcula la cantidad de billetes y monedas
int transformar(int monto, int valor, string texto)
{
    int contador = 0; // Contador local para cada billete o moneda
    while (monto >= valor)
    {
        monto -= valor;
        contador++;
    }

    // Imprime la cantidad de billetes o monedas
    if (contador > 0) 
        cout << contador << " " << texto << (contador > 1 ? "s" : "") << " de " << valor << endl;

    return monto; // Devolvemos el monto actualizado
}