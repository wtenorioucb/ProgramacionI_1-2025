// Materia: Programación I, Paralelo 3
// Autor: Juan Jose Condori Yucra
// Fecha creación: 10/03/2025
// Número de ejercicio: 2
/* Problema planteado:Crea una función llamada calcularVolumen que reciba un parámetro radio y un
parámetro altura. El parámetro altura debe tener un valor por defecto de 10.
Calcula y devuelve el volumen de un cilindro (usando la fórmula: V=π×r2×hV)*/
#include <iostream>
#include <cmath>  // Para M_PI
using namespace std;

// Función para calcular el volumen de un cilindro
float calcularVolumen(int radio, int altura = 10) {
    return M_PI * radio * radio * altura;
}

int main() {
    int radio;

    cout << "Introduzca el radio para calcular el volumen: ";
    cin >> radio;

    float volumen = calcularVolumen(radio);  // Llamada correcta a la función

    cout << "El volumen es: " << volumen << endl;

    return 0;
}
