#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main () {
    srand(time(NULL));
    int numero = rand() % (51);
    int intentos = 1, superior = 50, inferior = 0;
    
    while(intentos <= 5) {
        cout << "Intento " << intentos << endl;
        cout << "Estoy pensando un numero entre " << inferior << " y " << superior << ":\n";
        int aux;
        cin >> aux;
        if(aux == numero){
            cout << "Felicidades, ganaste!!" << endl;
            break;
        } else if (aux < numero) {
            inferior = aux;
        } else if (aux > numero) {
            superior = aux;
        }
        intentos++;
    }

    if(intentos == 6) {
        cout << "Fallaste :(" << endl;
        cout << "El numero en el que estaba pensando era el " << numero << endl;
    }
}