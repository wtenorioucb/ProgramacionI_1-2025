#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

struct estudiante{
    int cedula;
    char nombre[50];
    char apellido[50];
    int edad;
    char profesion[50];
    char lugar_nacimiento[50];
    char direccion[50];
    int telefono;
};

void llenarstructura(estudiante arreglo[], int n){
    for (int i = 0; i <n; i++)
    {
        cout << "ingrese la cedula del estudiante " <<endl;
        cin >> arreglo[i].cedula;
        cin.ignore();
        cout << "ingrese el nombre del estudiante " <<endl;
        cin.getline(arreglo[i].nombre,50);
        cout << "ingrese el apellido del estudiante " <<endl;
        cin.getline(arreglo[i].apellido,50);
        cout << "ingrese la edad del estudiante " <<endl;
        cin>>arreglo[i].edad;
        cin.ignore();
        cout << "ingrese la profesion del estudiante (?) " <<endl;
        cin.getline(arreglo[i].profesion,50);
        cout << "ingrese el lugar de nacimiento del estudiante " <<endl;
        cin.getline(arreglo[i].lugar_nacimiento,50);
        cout << "ingrese la direccion del estudiante " <<endl;
        cin.getline(arreglo[i].direccion,50);
        cout << "ingrese el telefono del estudiante " <<endl;
        cin>>arreglo[i].telefono;
    }
}

void mostrarEstructura(estudiante arreglo[], int n){
    for (int i = 0; i <n; i++)
    {
        cout << "la cedula del estudiante " << i << " es " << arreglo[i].cedula << endl;
        cout << "el nombre del estudiante " << i << " es " << arreglo[i].nombre << endl;
        cout << "la edad del estudiante " << i << " es " << arreglo[i].edad << endl;
        cout << "la profesion del estudiante " << i << " es " << arreglo[i].profesion << endl;
        cout << "el lugar de nacimiento del estudiante " << i << " es " << arreglo[i].lugar_nacimiento << endl;
        cout << "la direccion del estudiante " << i << " es " << arreglo[i].direccion << endl;
        cout << "el telefono del estudiante " << i << " es " << arreglo[i].telefono << endl;
    }   
}


int main() {
    int n;
    cout <<"introduzca la cantidad de estudiantes a registrar "<<endl;
    cin>>n;
    estudiante arreglo[n];
    llenarstructura(arreglo, n);
    cout << "los estudiantes son "<<endl;
    mostrarEstructura(arreglo, n);
    return 0;
}