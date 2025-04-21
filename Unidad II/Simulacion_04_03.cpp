#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

void LlenarVectores(vector<int>&, vector<int>&);
void MostrarVectores(vector<string>, vector<int>, vector<int>);
int GenerarAleatorios(int, int);
bool SimularVenta(vector<string>, vector<int>&, vector<int>);

int main()
{
    vector<string> Codigos({"COD-001", "COD-002", "COD-003", "COD-004", "COD-005", "COD-006", "COD-007", "COD-008", "COD-009", "COD-010"});
    vector<int> Cantidades;
    vector<int> Precios;
    int NroSimulaciones = 0;
    int ContadorSimulaciones = 1;
    system("cls");
    srand(time(NULL));
    LlenarVectores(Cantidades, Precios);
    cout << "Ingrese el nro de simulaciones: ";
    cin >> NroSimulaciones;
    while (ContadorSimulaciones <= NroSimulaciones)
    {
        cout << "\nSIMULACION NRO: " << ContadorSimulaciones << endl;
        cout << "=================" << endl;
        MostrarVectores(Codigos, Cantidades, Precios);
        if (SimularVenta(Codigos, Cantidades, Precios))
        {
            ContadorSimulaciones++;
        }
        system("pause");
        system("cls");
    }
    cout << "FIN DE LAS SIMULACIONES" << endl;
    MostrarVectores(Codigos, Cantidades, Precios);
    return 0;
}

void LlenarVectores(vector<int> &Cantidades, vector<int> &Precios)
{
    for (int i = 0; i < 10; i++)
    {
        Cantidades.push_back(GenerarAleatorios(10, 100));
    }
    for (int i = 0; i < 10; i++)
    {
        Precios.push_back(GenerarAleatorios(1, 1000));
    }
}

void MostrarVectores(vector<string> Codigos, vector<int> Cantidades, vector<int> Precios)
{
    cout << "CODIGO\tCANTIDAD\tPRECIO" << endl;
    for (int i = 0; i < Codigos.size(); i++)
    {
        cout << Codigos[i] << "\t\t" << Cantidades[i] << "\t\t" << Precios[i] << endl;
    }
}

int GenerarAleatorios(int limInferior, int limSuperior)
{
    return limInferior + rand() % ((limSuperior + 1) - limInferior);
}

bool SimularVenta(vector<string> Codigos, vector<int>& Cantidades, vector<int> Precios)
{
    string CodigoProducto;
    int CantidadVendida = 0;
    int PosicionEncontrada;
    cout << "Ingresar el codigo del producto: ";
    cin.ignore();
    getline(cin, CodigoProducto);
    cout << "Ingresar la cantidad vendida: ";
    cin >> CantidadVendida;
    PosicionEncontrada = 0;
    for (int i = 0; i < Codigos.size(); i++)
    {
        if (CodigoProducto == Codigos[i])
        {
            PosicionEncontrada = i;
        }
    }
    if (PosicionEncontrada != 0)
    {
        cout << "\tCODIGO PRODUCTO: " << Codigos[PosicionEncontrada] << endl;
        cout << "\tCANTIDAD DISPONIBLE: " << Cantidades[PosicionEncontrada] << endl;
        cout << "\tPRECIO UNITARIO: " << Precios[PosicionEncontrada] << endl;
        if (Cantidades[PosicionEncontrada] >= CantidadVendida)
        {
            cout << "\tCANTIDAD VENDIDA: " << CantidadVendida << endl;
            Cantidades[PosicionEncontrada] = Cantidades[PosicionEncontrada] - CantidadVendida;
            cout << "\tSALDO: " << Cantidades[PosicionEncontrada] << endl;
            cout << "\tTOTAL A PAGAR: " << CantidadVendida * Precios[PosicionEncontrada] << endl;
            return true;
        }
        else
        {
            cout << "No hay suficiente cantidad disponible!!!!." << endl;
            return false;
        }
    }
    else
    {
        cout << "El codigo ingresado no existe." << endl;
        return false;
    }
}