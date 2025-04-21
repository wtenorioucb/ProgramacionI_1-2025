#include <iostream>
#include <string>
using namespace std;
int main()
{
    string cadena;
    char otraCadena[30];
    int valorNumerico;
    cout << "Ingrese valor numerico: ";
    cin >> valorNumerico;
    cout << "Ingrese una cadena: ";
    cin.ignore(); // Siempre despues de leer un numero y antes del getline
    getline(cin, cadena); // Permite ingresar cadenas
    cout << "Ingrese otra cadena: ";
    cin.getline(otraCadena, 30); // Permite ingresar cadenas
    return 0;
}


