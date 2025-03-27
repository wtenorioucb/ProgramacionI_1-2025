#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int NroRandomico(int limiteInferior, int limiteSuperior);

int main()
{
    int n = 0;
    double haberBasico = 2500.00;
    double salarioTotal = 0;
    int antiguedad = 0;
    double valorAntiguedad = 0;
    int nroElectrodomestico = 0;
    int precioElectrodomestico = 0;
    int sumaElectrodomestico = 0;
    srand(time(NULL)); // Semilla
    system("cls");
    cout << "Ingrese la cantidad de vendedoras: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        antiguedad = NroRandomico(1, 40);
        switch (antiguedad)
        {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                valorAntiguedad = (haberBasico * 3)*0.1;
                break;
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
                valorAntiguedad = (haberBasico * 3)*0.15;
                break;
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                valorAntiguedad = (haberBasico * 3)*0.175;
                break;
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
                valorAntiguedad = (haberBasico * 3)*0.2;
                break;
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
                valorAntiguedad = (haberBasico * 3)*0.225;
                break;
            default:
                valorAntiguedad = (haberBasico * 3)*0.25;
                break;
        }
        salarioTotal += (haberBasico + valorAntiguedad);
        nroElectrodomestico = NroRandomico(1,10);
        for (int j = 1; j <= nroElectrodomestico; j++)
        {
            precioElectrodomestico = NroRandomico(500,20000);
            sumaElectrodomestico += precioElectrodomestico;
        }
        cout << "El salario de la venderora " << i << " es: " << haberBasico + valorAntiguedad << endl;
    }
    cout << "El total vendido es: " << sumaElectrodomestico << endl;
    cout << "La comision que debe pagar por vendedora es: " << sumaElectrodomestico * 0.1 << endl;
    cout << "El total de salarios de las vendedoras es: " << salarioTotal;
    return 0;
}

int NroRandomico(int limiteInferior, int limiteSuperior)
{
    int aleatorio = limiteInferior + rand() % ((limiteSuperior + 1) - limiteInferior);
    return aleatorio;
}