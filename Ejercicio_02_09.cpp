#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main () {
    int suma = 0;
    int promedio = 0;
    int menor = 0;
    int mayor = 0;
    int numero=0;
    int n = 0;
    cout << "Ingrese la cantidad de numeros a generar: ";
    cin >> n;
        
    for (int i = 0; i <=n; i++) {
        numero = rand() % (1000);
        suma += numero;
        if (i == 0) {
            menor = numero;
            mayor = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
        if (numero > mayor) {
            mayor = numero;
        }
    
    }
    promedio = suma / n;
    cout << "La suma de los numeros generados es: " << suma << endl;
    cout << "El promedio de los numeros generados es: " << promedio << endl;
    cout << "El numero menor es: " << menor << endl;
    cout << "El numero mayor es: " << mayor << endl;    

    return 0;
   
}