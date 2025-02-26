#include <iostream>
#include <math.h>

using namespace std;

int main () {
    int numero, base;
    cout << "Ingrese el numero: " << endl;
    cin >> numero;
    cout << "Ingrese la base: " << endl;
    cin >> base;

    int decimal = 0, potencia = 0;

    while(numero > 0){
        
        int digito = numero % 10;
        decimal += pow(base, potencia) * digito; // pow(base, potencia);
        numero /= 10;
        potencia++;
    }

    cout << "El numero en sistema decimal es: " << decimal << endl;
}