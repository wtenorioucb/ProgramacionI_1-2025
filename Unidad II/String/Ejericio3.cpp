#include <iostream>
#include <cstring>

using namespace std;

struct estudiante
{
    char nombres[30];
    char apellido[30];
    char materia[30];
    int nota;
};

int main()
{
    char cadena1[50] = "Willy";
    char cadena2[50] = " Tenorio";
    string cadena3;
    char cadena4[50] = "";
    // Unir variables de tipo textos
    cout << strcat(cadena1, cadena2) << endl;

    // Copiar un texto en una variable
    strcpy(cadena1,"Willy");
    strcpy(cadena2," Tenorio");

    // Copiar un texto en otro texto por nro de caracteres
    cout << strncat(cadena1, cadena2, 3) << endl;

    // buscar un texto  determinado en una cadena
    cadena3 = cadena1;
    cout << cadena3 << endl;
    cout << cadena3.find("l",0) << endl;

    // longitud de una cadena
    cout << cadena3 << endl;
    cout << cadena3.length() << endl;
    cout << cadena3.size() << endl;

    // Comparar dos cadenas
    strcpy(cadena1,"Willy");
    strcpy(cadena2,"Willy");
    if (strcmp(cadena1, cadena2) == 0)
    {
        cout << "Cadenas iguales" << endl;
    }
    else
    {
        cout << "Cadenas distintas" << endl;
    }

    // Desplegar letra por letra
    cadena3 = "Willy Tenorio";
    for(int i=0; i<cadena3.size(); i++)
    {
        cout << cadena3[i] << endl;
    }

    // Copiar un texto en otro texto por nro de caracteres
    strcpy(cadena1,"Willy;Tenorio");
    strcpy(cadena2,"a");
    strcpy(cadena4,"");
    cadena3 = cadena1;
    cout << strncat(cadena2, cadena1, cadena3.find(";")) << endl;
    cout << strncpy(cadena2, cadena1, cadena3.find(";")) << endl;
    return 0;
}
