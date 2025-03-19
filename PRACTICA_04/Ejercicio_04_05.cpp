// Materia: Programación I, Paralelo 3
// Autor: Juan Jose Condori Yucra
// Fecha creación: 10/03/2025
// Número de ejercicio: 5
/* Problema planteado: Realizar un programa que reciba las horas trabajadas de un trabajador, la tarifa por
hora y una bonificación si trabaja mas de 8 horas , solamente a las horas extra.
Debe dar como resultado.
• Salario del trabajador
• Salario bonificación si es que tuviera.*/
#include <iostream>
using namespace std;
// Funcion para calcular el salario base
double calcularSalarioBase(double horasTrabajadas, double tarifaPorHora) {
    return (horasTrabajadas > 8) ? 8 * tarifaPorHora : horasTrabajadas * tarifaPorHora;
}
// Funcion para calcular la bonificacion de horas extras
double calcularBonificacion(double horasTrabajadas, double tarifaPorHora, double bonoExtra) {
    if (horasTrabajadas > 8) {
        double horasExtras = horasTrabajadas - 8;
        return horasExtras * tarifaPorHora * bonoExtra; // Correcto
    }
    return 0.0; // No hay bonificacion si no hay horas extras
}
int main() {
    double horasTrabajadas, tarifaPorHora, bonoExtra;
    // Solicitar datos al usuario
    cout << "Ingrese las horas trabajadas: ";
    cin >> horasTrabajadas;
    cout << "Ingrese la tarifa por hora: ";
    cin >> tarifaPorHora;
    cout << "Ingrese el factor de bonificación (Ejemplo: 1.5 si es 50% extra): ";
    cin >> bonoExtra;
    // Validacion para evitar valores incorrectos
    if (bonoExtra < 1.0) {
        cout << "Error: El factor de bonificación debe ser al menos 1.0 (sin bonificación) o mayor.";
        return 1; // Termina el programa con error
    }
    // Calcular salario base y bonificacion
    double salarioBase = calcularSalarioBase(horasTrabajadas, tarifaPorHora);
    double bonificacion = calcularBonificacion(horasTrabajadas, tarifaPorHora, bonoExtra);
    double salarioTotal = salarioBase + bonificacion;
    // Mostrar los resultados
    cout << "Salario base del trabajador: $" << salarioBase << endl;
    cout << "Bonificacion por horas extras: $" << bonificacion << endl;
    cout << "Salario total: $" << salarioTotal << endl;

    return 0;
}
