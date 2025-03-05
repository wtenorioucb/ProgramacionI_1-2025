// Materia: Programación I, Paralelo 3 
// Autor: Lopez Tejerina Christian R 
// Fecha creación: 05/03/2025 
// Número de ejercicio: 9 
// Problema planteado: cajero con cortes en funciones
#include <iostream>
 
using namespace std;

int cajero (int n){ //esta funcion lee un numero por consola y lo divide en billetes y monedas
    int doscientos=0;
    int cienes=0;
    int cincuenta=0;
    int decenas=0;
    int veintes=0;
    int cincos=0;
    int unidad=0;
    int cortes=0;
        if (n>=200){ //si verifica que es mayor que 200 entonces divide en billetes de 200
        for (int i = 0 ; i<n/200 ; i++){
            doscientos++;
        }
        n = n - doscientos*200; //para restar el valor de los billetes de 200
        if (n>=100){
            for (int j = 0; j<n/100 ; j++){
                cienes++; 
            }
        }
        n= n-(cienes*100); //lo mismo sucede con los distintos cortes

        if (n>=50){
            for (int k = 0; k<n/50 ; k++){
                cincuenta++;        
            }
            n = n - cincuenta*50;
        }
        if (n>=20){
            for (int l = 0; l<n/20 ; l++){
                veintes++;
            }
            n = n - veintes*20;
        }
        
        if (n>=10){
            for (int m = 0; m<n/10 ; m++){
                decenas++;
            }
        }
        n = n - decenas*10; 
        for (int j = 0; j<n/10 ; j++){
            decenas++;
        }
        n = n - decenas*10;
        if (n>=5){
            for (int j = 0; j<n/5 ; j++){
                cincos++;
            }
        }
        n = n - cincos*5;
        for (int k = 0; k<n ; k++){
            unidad++;
        }   	
        cout << "los billetes de 200 son: " << doscientos << endl; // eventualmente se imprimen los cortes
        cout << "los billetes de 100 son: " << cienes << endl;
        cout << "los billetes de 50 son: " << cincuenta << endl;
        cout << "los billetes de 20 son: " << veintes << endl;
        cout << "los billetes de 10 son: " << decenas << endl;
        cout << "las monedas de 5 son " << cincos << endl;
        cout << "las monedas de 1 son: " << unidad << endl;
        
    }
    
    return cortes;
}

int main () {
    int n = 0;
    cout << "ingrese la cantidad de dinero  ";
    cin >> n;
    cout << cajero(n) << endl; // se llama a la funcion cajero
    
    return 0;
}

