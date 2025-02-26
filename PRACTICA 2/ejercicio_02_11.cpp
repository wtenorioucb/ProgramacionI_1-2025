//Materia. Programacion I, Paralelo 3
//Autor: Camila Valentina Cuba Fernandez 
//Fecha de Creacion: 22/02/2025
//Problema Planteado: cuantos pañales por dia se consumen

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int n;
    //ingresar datos
	cout << "Ingrese la cantidad de ninios: " << endl;
	cin >> n;
	//genera entre 0 y n niños de 1 año
	int ninos1 = 1 + rand() % (n + 1);
	//genera entre 0 y n niños de 2 años
	int ninos2 = 1 + rand() % (n + 1-ninos1);
	//genera niños restantes
	int ninos3 = n-ninos1-ninos2;
	//calcular la cantidad que consume cada niño
	int panales = (ninos1 * 6) + (ninos2 * 3) + (ninos3 * 2);

	cout << "Ninios de 1 anio: " << ninos1 << endl;
	cout << "Ninios de 2 anios: " << ninos2 << endl;
	cout << "Ninios de 3 anios: " << ninos3 << endl;

	cout << "El consumo total de paniales al dia es: " << panales << endl;
	return 0;
}