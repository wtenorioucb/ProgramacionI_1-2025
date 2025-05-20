#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

struct AgendaTelefonica
{
    char nombre[30];
    char telefono[8];
    char celular[11];
    char email[30];
};

void IngresarContactos(vector<AgendaTelefonica>& Contactos);
void MostrarContactos(vector<AgendaTelefonica> Contactos);
void BuscarContacto(vector<AgendaTelefonica> Contactos, char nombre[30]);
void ModificarContacto(vector<AgendaTelefonica>& Contactos, char nombre[30]);
void EliminarContacto(vector<AgendaTelefonica>& Contactos, char nombre[30]);

int main()
{
    /* code */
    return 0;
}
