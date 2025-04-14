#include <iostream>
#include <vector>
#include <string>

#include <time.h>
#include <stdlib.h>

using namespace std;

void SimulacionVenta(vector<int>&, vector<int>&, vector<int>&, vector<int>&, vector<int>&, vector<int>&);
void DesplegarVenta(vector<int>, int);
void DeplegarTotalVendido(vector<int>, int, int&);

int main()
{
    vector<int> mangera1;
    vector<int> mangera2;
    vector<int> mangera3;
    vector<int> mangera4;
    vector<int> mangera5;
    vector<int> mangera6;
    int sumaLitros = 0;
    int TotalLitros = 0;
    system("cls");
    srand(time(NULL));

    SimulacionVenta(mangera1,mangera2,mangera3,mangera4,mangera5,mangera6);
    DesplegarVenta(mangera1,1);
    DesplegarVenta(mangera2,2);
    DesplegarVenta(mangera3,3);
    DesplegarVenta(mangera4,4);
    DesplegarVenta(mangera5,5);
    DesplegarVenta(mangera6,6);
    DeplegarTotalVendido(mangera1,1,sumaLitros);
    TotalLitros += sumaLitros;
    sumaLitros = 0;
    DeplegarTotalVendido(mangera2,2,sumaLitros);
    TotalLitros += sumaLitros;
    sumaLitros = 0;
    DeplegarTotalVendido(mangera3,3,sumaLitros);
    TotalLitros += sumaLitros;
    sumaLitros = 0;
    DeplegarTotalVendido(mangera4,4,sumaLitros);
    TotalLitros += sumaLitros;
    sumaLitros = 0;
    DeplegarTotalVendido(mangera5,5,sumaLitros);
    TotalLitros += sumaLitros;
    sumaLitros = 0;
    DeplegarTotalVendido(mangera6,6,sumaLitros);
    TotalLitros += sumaLitros;
    sumaLitros = 0;
    cout << endl << "TOTAL DE AUTOS ATENDIDOS: " << mangera1.size() + mangera2.size() + mangera3.size() + mangera4.size() + mangera5.size() + mangera6.size();
    cout << endl << "TOTAL DE LITRO VENDIDOS: " << TotalLitros;
    return 0;
}

void SimulacionVenta(vector<int>& mangera1, vector<int>& mangera2, vector<int>& mangera3, vector<int>& mangera4, vector<int>& mangera5, vector<int>& mangera6)
{
    int nroManguera = 0;
    int cantidadLitros = 0;
    int totalGasolina = 10000;
    while (totalGasolina > 0)
    {
        nroManguera = 1 + rand() % ((6 + 1) - 1);
        cantidadLitros = 30 + rand() % ((50 + 1) - 30);
        if (cantidadLitros > totalGasolina)
        {
            cantidadLitros = totalGasolina;
        }        
        switch (nroManguera)
        {
            case 1:
                mangera1.push_back(cantidadLitros);
                break;
            case 2:
                mangera2.push_back(cantidadLitros);
                break;
            case 3:
                mangera3.push_back(cantidadLitros);
                break;
            case 4:
                mangera4.push_back(cantidadLitros);
                break;
            case 5:
                mangera5.push_back(cantidadLitros);
                break;
            case 6:
                mangera6.push_back(cantidadLitros);
                break;
        }
        totalGasolina = totalGasolina - cantidadLitros;
    }
}

void DesplegarVenta(vector<int> mangera, int nroManguera)
{
    cout << "Manguera" << nroManguera << ": ";
    for (int i = 0; i < mangera.size(); i++)
    {
        cout << "\t" << mangera[i];
    }
    cout << endl;
}

void DeplegarTotalVendido(vector<int> mangera, int nroManguera, int& sumaLitros)
{
    for (int i = 0; i < mangera.size(); i++)
    {
        sumaLitros += mangera[i];
    }
    cout << endl << "TOTAL VENDIDO POR MANGERA" << nroManguera << ": " << sumaLitros << " TOTAL BS: " << sumaLitros * 3.74;
}


