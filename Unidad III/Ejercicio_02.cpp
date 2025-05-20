//SEGUNDO EXAMEN PARCIAL
//Materia:Programacion I, Paralelo 3
//Estudiante: BRAD BEYMAR VILLEGAS CASTRO
//Fecha: 07/05/2025

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void GenerarMatriz(int matriz[100][100],int n,int m,int A,int B);
void MostrarMatriz(int matriz[100][100],int n,int m);
int SumaUltimaColumna(int matriz[100][100],int n,int m);
int ProductoUltimaFila(int matriz[100][100],int n,int m);

int main()
{
    int n,m,A,B;
    int Suma,Producto;
    int matriz[100][100];
    srand(time(NULL));
    cout<<"Ingrese el numero de filas de la matriz: " << endl;
    cin>>n;
    cout<<"Ingrese el numero de columnas de la matriz: " << endl;;
    cin>>m;
    cout<<"Ingrese el limite inferior A de los numeros a generar: " << endl;;
    cin>>A;
    cout<<"Ingrese el limite superior B de los numeros a generar: " << endl;;
    cin>>B;
    GenerarMatriz(matriz,n,m,A,B);
    cout << endl << "La matriz generada es: " << endl;
    MostrarMatriz(matriz,n,m);
    Suma=SumaUltimaColumna(matriz,n,m);
    cout << endl << "La suma de la ultima fila es: "<<Suma;
    Producto=ProductoUltimaFila(matriz,n,m);
    cout << endl << "El producto total de la ultima fila es: "<<Producto;


    return 0;
}

void GenerarMatriz(int matriz[100][100],int n,int m,int A,int B)
{
    for ( int i = 0; i < n; i++)
    {
        for ( int j = 0; j < m; j++)
        {
           matriz[i][j]=A+rand() % ((B+1)-A);
        }
    }
}

void MostrarMatriz(int matriz[100][100],int n,int m)
{
    for ( int i = 0; i < n; i++)
    {
        for ( int j = 0; j < m; j++)
        {
           cout<<matriz[i][j]<<"\t";        
        }
        cout<<endl;
    }
}

int SumaUltimaColumna(int matriz[100][100],int n,int m)
{
    int suma=0;
    for ( int i = 0; i < n; i++)
    {
        suma+=matriz[i][m-1];
    }
    return suma;
}

int ProductoUltimaFila(int matriz[100][100],int n,int m)
{
    int producto=1;
    for ( int i = 0; i < n; i++)
    {
           producto*=matriz[n-1][i];
    }
    return producto;
}