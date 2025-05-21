#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

struct empleado{
    char nombre[50]="";
    int id=0;
    double sueldo=0;
    int antiguedad=0;
};

void llenarEstructura(empleado arreglo[], int n){
    for (int i = 0; i <n; i++)
    {
        cout << "ingrese el nombre de la persona " << i+1 <<endl;
        cin.getline(arreglo[i].nombre, 50);
        cout << "ingrese el id de la persona " << i+1 <<endl;
        cin>>arreglo[i].id;
        cin.ignore();
        cout << "ingrese el sueldo de la persona " <<endl;
        cin>>arreglo[i].sueldo;
        cout << "ingrese la antiguedad de la persona " <<endl;
        cin>>arreglo[i].antiguedad;
        cin.ignore();
    }
}

void mostrarEstruct(empleado arreglo[], int n){
    for (int i = 0; i <n; i++)
    {
        cout << "la persona " << arreglo[i].nombre<<endl;
        cout << "con id de  " << arreglo[i].id<<endl;
        cout << "gana " << arreglo[i].sueldo<<endl;
        cout << "y tiene una antiguedad de " << arreglo[i].antiguedad<<endl;
    }
}

int sueldomayor(empleado arreglo[], int n, int referencia){
    int conteoempleados=0;
    for (int i = 0; i <n; i++)
    {
        if (arreglo[i].sueldo>referencia){
            conteoempleados++;
        }
    }
    return conteoempleados;
}

int promedio_antiguedad(empleado arreglo[], int n){
    int prom=0;
    for (int i = 0; i <n; i++)
    {
        prom+=arreglo[i].antiguedad;
    }
    return prom/n;
}

int main (){
    int n;
    cout <<"cuantos empleados registrara? " <<endl;
    cin >>n;
    cin.ignore();
    empleado arreglo[n];
    llenarEstructura(arreglo,n);
    mostrarEstruct(arreglo, n);
    int ref;
    cout << "ingrese el sueldo referencia " <<endl;
    cin >> ref;
    int conteo_empleados=sueldomayor(arreglo,n,ref);
    cout << "la cantidad de empleados que ganan mas a la referencia de sueldo son " << conteo_empleados<<endl;
    int promanti=promedio_antiguedad(arreglo,n);
    cout << "el promedio de antiguedad de los empleados es "<<promanti<<endl;

    return 0;
}