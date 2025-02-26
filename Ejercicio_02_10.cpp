#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;
int main(){
    srand(time(NULL));
    int n;
    int m;
    int contadorprimos=0;

    cout << "Ingrese la cantidad de numeros a generar: ";
    cin >> n;

    
    for (int i=1; i<=n; i++){
        int numero = rand() % (1000);
        m=0;
        cout << "Numero generado: " << numero << endl;
        for (int i = 2; i <=numero /2 ; i++) {
            int division = numero % i;
            if (division == 0) {
                m=0;}
                else {
                    m=1;
                    
                }
        }
        if (m==1) {
            contadorprimos++;
            
        } 
    }
    cout << "La cantidad de numeros primos generados es: " << contadorprimos << endl;
    return 0;
        
    }
   
