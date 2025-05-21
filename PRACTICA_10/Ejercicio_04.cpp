#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

struct empleado{
    char nombre[50];
    char genero[50];
    double salario=0;
};

void llenarArreglo(empleado arreglo[], int n){
    for (int i = 0; i <n; i++)
    {
        cout << "ingrese el nombre del empleado " << i <<endl;
        cin.getline(arreglo[i].nombre,50);
        cout << "ingrese el SEXO del empleado "<< i <<endl;
        cin.getline(arreglo[i].genero,50);
        cout << "ingrese el salario del empleado " << i<<endl;
        cin>>arreglo[i].salario;
        cin.ignore();
    }
}

void mostrarArreglo(empleado arreglo[], int n){
    for (int i = 0; i <n; i++)
    {
        cout << "el nombre del empleado " << i << " es " << arreglo[i].nombre <<endl;
        cout << "el SEXO del empleado " << i << " es " << arreglo[i].genero <<endl;
        cout << "el salario del empleado " << i << " es " << arreglo[i].salario <<endl;
    }
}

double salarioMayor(empleado arreglo[], int n, double &salarioMayor){
    int posMayor=0;
    for (int i = 0; i <n; i++)
    {
        if (arreglo[i].salario>salarioMayor){
            salarioMayor=arreglo[i].salario;
            posMayor=i;
        }
    }
    return posMayor;
}

double salarioMenor(empleado arreglo[], int n, double &salarioMenor){
    int posMenor=0;
    for (int i = 0; i <n; i++)
    {
        if (arreglo[i].salario<salarioMenor){
            salarioMenor=arreglo[i].salario;
            posMenor=i;
        }
    }
    return posMenor;
}

int main(){
    int n;
    cout << "ingrese la cantidad de empleados a resgistrar" <<endl;
    cin >>n;
    cin.ignore();
    empleado arreglo[n];
    llenarArreglo(arreglo, n);
    cout << "los empleados registrados son "<<endl;
    mostrarArreglo(arreglo, n);
    double SM=0.0;
    double SMen=0.0;
    int salarioM=salarioMayor(arreglo,n, SM);
    int salarioMen=salarioMenor(arreglo,n,SMen);
    cout << "el empleado que gana mas es " << arreglo[salarioM].nombre<<endl;
    cout << "su salario es de " << SM << endl;
    cout << "el empleado que gana menos es " << arreglo[salarioMen].nombre<<endl;
    cout << "su salario es de " << SMen << endl;
    return 0;
}