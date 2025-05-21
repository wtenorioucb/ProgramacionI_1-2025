#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

struct libros {
    char titulo[50]={};
    char autor[50]={};
    int anoPublicacion=0;
    bool disponible=true;
};

void ingresar(libros arreglo[], int n){
    for (int i = 0; i <n; i++)
    {
        cout << "ingrese el libro " << i+1 << endl;
        cin.ignore();
        cin.getline(arreglo[i].titulo, 50);
        cout << "ingrese el autor " << i+1 <<endl;
        cin.getline(arreglo[i].autor, 50);
        cout << "ingrese el anio de publicacion " <<endl;
        cin>>arreglo[i].anoPublicacion;
        cout << "esta el libro disponible? (1 = Si, 0 = No) "<<endl;
        cin>>arreglo[i].disponible; 
    }
}

void mostrarArreglo(libros arreglo[], int n){
    for (int i = 0; i <n; i++)
    {
        cout << arreglo[i].titulo <<endl;
        cout << arreglo[i].autor <<endl;
        cout << arreglo[i].anoPublicacion <<endl;
    }
}

bool comparar(libros arreglo[], int n, char inputbuscar[50]){
    for (int i = 0; i < n; i++) {
        if (strcmp(arreglo[i].titulo, inputbuscar) == 0) {
            if (arreglo->disponible){
                cout << "el libro esta disponible "<<endl;
                return true;
            }
            else {
                cout << "el libro no esta disponible "<<endl;
                return false;
            }
        }
        else{
            cout << "no se encontro el libro "<<endl;
            return false;
        }
    }
    return true;
}


int main (){
    int n;
    char buscar[50] ="";
    cout << "ingrese la cantidad de libros que desea registrar "<<endl;
    cin >>n;
    libros arreglo[n];
    ingresar(arreglo, n);
    cout << "que libro desea buscar? "<<endl;
    cin.ignore();
    cin.getline(buscar, 50);
    mostrarArreglo(arreglo, n);
    comparar(arreglo,n,buscar);
    return 0;
}
