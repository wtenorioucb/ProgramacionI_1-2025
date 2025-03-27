#include <iostream>

using namespace std;

int NroRandomico(int limInicial, int limFinal);
double Promedio(int n, int& mayores);

int main()
{
    int n = 0;
    int mayores = 0;
    system("cls");
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> n;
    cout << "El promedio es: " << Promedio(n, mayores)<< endl;
    cout << "La cantidad de estudiante mayores a 18 años es: " << mayores;
    return 0;
}

int NroRandomico(int limInicial, int limFinal)
{
    int aleatorio = 0;
    aleatorio = limInicial + rand() %  ( (limFinal + 1) - limInicial);
    return aleatorio;
}

double Promedio(int n, int& mayores)
{
    double sumEdades = 0;
    int edad = 0;
    cout << "DATOS" << endl;
    for (int i = 1; i <= n; i++)
    {
        edad = NroRandomico(1, 35);
        cout << "Edad alumno " << i << ": " << edad << endl;
        sumEdades += edad;
        if (edad > 18)
        {
            mayores++;
        }
    }
    return sumEdades / n;
}