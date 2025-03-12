// Materia: Programación I, Paralelo 3 
// Autor: Lopez Tejerina Christian R 
// Fecha creación: 12/03/25
// Número de ejercicio: 8
// Problema planteado: productos con descuentos y total a pagar

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int smn = 2500;
double antiguedad (int n);

int main (){

    srand(time(NULL));
    double sueldomn=0;
    double sueldofinal=0;
    int vendedoras;
    int anostrabajados=0;
    int prodvendido=0;
    double sueldototal=0;
    double comision;
    cout << "ingrese la cantidad de vendedoras "; 
    cin >> vendedoras;

    for (int  i = 1; i <=vendedoras ; i++) //genera vendedoras hasta n
    {
    anostrabajados =  rand()%(25) + 1; // genera para cada vendedora anos trabajados
    
    sueldomn = antiguedad (anostrabajados); //llama a la funcion que calcula el sueldo sin comision
    prodvendido = rand ()% (99) + 1; //genera cantidad de productos vendidos por vendedora
    //cout <<sueldomn<< endl;
    if (prodvendido >= 10){ //si vende 10+ prod recibe comision del 10% de su salario 
        comision = (sueldomn * (0.1));
        sueldofinal = sueldomn + comision; 
    }
    else { //si no cumple no
        comision =0;
        sueldofinal = sueldomn;
    }
    sueldototal = sueldototal + sueldofinal; //sueldo total a pagar
    cout << "la vendedora "<< i << " " << "tiene un sueldo de " << sueldofinal <<" " << "y la comision es " << comision << endl;
    }
    cout << "el total a pagar es  " << sueldototal<< endl;
    return 0;
}

double antiguedad (int n){ //calcula el total del smn mas anos trabajados
    double aux=0;

    if (n >= 2 && n>=4){
        aux = smn + (smn * 0.05);
    }
    if (n >= 5 && n>=7){
        aux = smn + (smn * 0.08);
    }
    if (n >= 8 && n>=10){
        aux = smn + (smn * 0.18);
    }
    if (n >= 11 && n>=14){
        aux = smn + (smn * 0.26);
    }
    if (n >= 15 && n>=19){
        aux = smn + (smn * 0.34);
    }
    if (n >= 20 && n>=24){
        aux = smn + (smn * 0.42);
    }
    if (n >= 25){
        aux = smn + (smn * 0.5);
    }
    return aux;
}