// Materia: Programación I, Paralelo 3 
// Autor: Lopez Tejerina Christian R 
// Fecha creación: 05/03/2025 
// Número de ejercicio: 8 
// Problema planteado: estudiantes y atributos random y promedios en funciones
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int calculoedad (int n){ //esta funcion calcula el promedio de las edades 
    int contador=0; 
    int contadoredad=0;
    for (int i = 1; i <=n; i++){ // se crea un ciclo para generar edades aleatorias
        int edad = rand() % (35) + 1; 
        //cout << edad << endl;
        contador = edad + contador; 
        if (edad >= 18){
            contadoredad++;
        } 
    }
    
    int promedio = contador/n;
    cout << "los estudiantes mayores de 18 anos son " << contadoredad << endl; // se imprime la cantidad de estudiantes mayores de 18
    return promedio;
}
int calculoaltura (int n){ //esta funcion calcula el promedio de las alturas
    int contador=0;
    int contadoraltura=0;
    for (int i = 1; i <=n; i++){
        int altura = rand() % (120) + 80;
        contador = altura + contador;
        if (altura >= 175){
            contadoraltura ++;    
        }

    }
    int promedio = contador/n;
    cout << "los estudiantes que miden mas de 175 cm son " << contadoraltura << endl; //de igual manera se imprimen la altura > 175
    return promedio;

}
int main () {
    srand(time(NULL));
    int estudiantes;
    cout << "Ingrese el número de estudiantes: ";
    cin >> estudiantes;
    cout << "el promedio de altura de los estudiantes es: " << calculoaltura(estudiantes) << endl; // en este punto el promedio se muestra en otra linea, no se por que
    cout << "el promedio de edad de los estudiantes es: " << calculoedad(estudiantes) << endl; //si se muestra el promedio de edad y altura, pero no en la misma linea ya no se que hacer xd 
    return 0;
    
    
    }
