#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

struct atleta {
    char nombre[50]="";
    char pais[50]="";
    int edad=0;
    int tiempo=0;
};

void llenardatos(atleta arreglo[], int n){
    for (int i = 0; i <n; i++)
    {
        cout << "ingrese el nombre del atleta " << i << endl;
        cin.ignore();
        cin.getline(arreglo[i].nombre, 50);
        cout << "ingrese el pais de procedencia " <<endl;
        cin.getline(arreglo[i].pais, 50);
        cout << "ingrese la edad " <<endl;
        cin>>arreglo[i].edad;
        cout << "ingrese el tiempo "<<endl;
        cin>>arreglo[i].tiempo; 
    }
}

void mostrarDatos(atleta arreglo[], int n){
    for (int  i = 0; i <n; i++)
    {
        cout << arreglo[i].nombre<<endl;
        cout << arreglo[i].pais<<endl;
        cout << arreglo[i].edad<<endl;
        cout << arreglo[i].tiempo<<endl;
    }
}

int mejortiempo(atleta arreglo[], int n, int &mt){
    int posmt=0;
    for (int i = 0; i <n; i++)
    {
        if(arreglo[i].tiempo > mt){
            mt = arreglo[i].tiempo;
            posmt=i;
        }
    }
    return posmt;
}

int main (){
    int n;
    cout << "ingrese la cantidad de atletas a registrar " <<endl;
    cin >>n;
    atleta arreglo[n];
    llenardatos (arreglo, n);
    cout << "los atletas registrados son " <<endl;
    mostrarDatos(arreglo, n);
    int tiempomejor=0;
    int posmt=mejortiempo(arreglo, n, tiempomejor);
    cout << "el atleta con el mejor tiempo es " << endl;
    cout << arreglo[posmt].nombre<<endl;
    cout <<"del pais de "<< arreglo[posmt].pais<<endl;
    cout << "con el tiempo de " << tiempomejor<<endl;
    return 0;
}
