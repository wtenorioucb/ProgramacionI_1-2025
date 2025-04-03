#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre("Willy Edwin");
    string apellido = "Tenorio Palza";
    string aLot(10, 's'); // Repite 10 veces la letra s
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << aLot << endl;
    return 0;
}
