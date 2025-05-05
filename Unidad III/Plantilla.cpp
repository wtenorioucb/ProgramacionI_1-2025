#include <iostream>
#include <string>

using namespace std;

struct fecha
{
    int dia;
    int mes;
    int anio;
};

struct DatosEstudiante
{
    char nombres[30];
    char apellidos[30];
    int edad;
    float nota;
    fecha fecha_nacimiento;
};

int main()
{
    DatosEstudiante estudiante1, estudiante2, estudiante3;
    cout << "Ingrese los datos del estudiante 1:" << endl;
    cout << "Nombres: ";
    cin.getline(estudiante1.nombres, 30);
    cout << "Apellidos: ";
    cin.getline(estudiante1.apellidos, 30);
    cout << "Edad: ";
    cin >> estudiante1.edad;
    cout << "Nota: ";
    cin >> estudiante1.nota;
    cout << "Fecha de nacimiento DIA: ";
    cin >> estudiante1.fecha_nacimiento.dia;
    cout << "Fecha de nacimiento MES: ";
    cin >> estudiante1.fecha_nacimiento.mes;
    cout << "Fecha de nacimiento ANIO: ";
    cin >> estudiante1.fecha_nacimiento.anio;

    cout << "Los datos del estudiante 1 son:" << endl;
    cout << "Nombres: " << estudiante1.nombres << endl;
    cout << "Apellidos: " << estudiante1.apellidos << endl;
    cout << "Edad: " << estudiante1.edad << endl;
    cout << "Nota: " << estudiante1.nota << endl;
    cout << "Fecha de nacimiento: " << estudiante1.fecha_nacimiento.dia << 
        "/" << estudiante1.fecha_nacimiento.mes << 
        "/" << estudiante1.fecha_nacimiento.anio << endl;

        
    return 0;
}
