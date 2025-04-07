#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    string nombre;
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cin.ignore(); // Limpiar el buffer de entrada
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cout << "Hola " << nombre << ", tienes " << edad << " anios." << endl;
    return 0;
}
