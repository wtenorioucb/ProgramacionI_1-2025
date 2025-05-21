#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

struct pelicula{
    char titulo[50]="";
    char director[50]="";
    int duracion=0;
    int anio_estreno=0;
    char genero[50]="";
};

void llenarEstructura(pelicula arreglo[], int n){
    for (int i = 0; i <n; i++)
    {
        cout << "ingrese el titulo " << i+1 <<endl;
        cin.getline(arreglo[i].titulo,50);
        cout << "ingrese director "<< i+1 <<endl;
        cin.getline(arreglo[i].director,50);
        cout << "ingrese la duracion de la pelicula " << i+1<<endl;
        cin>>arreglo[i].duracion;
        cin.ignore();
        cout << "ingrese el ano de estreno de la pelicula " << i+1<<endl;
        cin>>arreglo[i].anio_estreno;
        cin.ignore();
        cout << "ingrese el genero de la pelicula "<< i+1 <<endl;
        cin.getline(arreglo[i].genero,50);
    }
}

/*void mostrarEstructura(pelicula arreglo[], int n){
    for (int  i = 0; i <n; i++)
    {
        cout << "la pelicula "
    }
    
}*/


void genesp (pelicula arreglo[], int n, char inputGenero[50]){
    for (int i = 0; i <n; i++)
    {
        //if (strcmp(arreglo[i].titulo, inputbuscar) == 0)
        if (strcmp(arreglo->genero, inputGenero)==0){
            cout << "las peliculas del genero son " << arreglo[i].titulo<<endl;
        }
    }
}

void diresp (pelicula arreglo[], int n, char inputdiresp[50]){
    for (int i = 0; i <n; i++)
    {
        if (strcmp(arreglo->director, inputdiresp)==0){
            cout << "las peliculas del director son " << arreglo[i].titulo<<endl;
        }
    }
}


int main (){
    int n;
    cout << "ingrese la cantidad de peliculas a registrar " <<endl;
    cin>>n;
    cin.ignore();
    pelicula arreglo[n];
    llenarEstructura(arreglo, n);
    char inputGenero[50];
    cout << "que genero desea buscar?" <<endl;
    cin.getline(inputGenero,50);
    char inputDir[50];
    cout << "que director desea buscar?" <<endl;
    cin.getline(inputDir,50);
    genesp(arreglo, n, inputGenero);
    diresp(arreglo,n,inputDir);
    return 0;
}