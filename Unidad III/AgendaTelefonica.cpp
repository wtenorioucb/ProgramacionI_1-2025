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

void IngresarContactos(vector<AgendaTelefonica>&);
void MostrarContactos(vector<AgendaTelefonica>);
void BuscarContacto(vector<AgendaTelefonica>, char[30]);
void ModificarContacto(vector<AgendaTelefonica>&, char[30]);
void EliminarContacto(vector<AgendaTelefonica>&, char[30]);
void MenuOpciones(vector<AgendaTelefonica>&);

int main()
{
    vector<AgendaTelefonica> Contactos;
    MenuOpciones(Contactos);
    cout << "Fin del programa..." << endl;
    return 0;
}

void IngresarContactos(vector<AgendaTelefonica> &Contactos)
{
    AgendaTelefonica nuevoContacto;
    cout << "INGRESAR NUEVO CONTACTO" << endl;
    cout << "=======================" << endl;
    cout << "Ingrese el nombre del contacto: ";
    cin.ignore();
    cin.getline(nuevoContacto.nombre, 30);
    cout << "Ingrese el telefono del contacto: ";
    cin.getline(nuevoContacto.telefono, 8);
    cout << "Ingrese el celular del contacto: ";
    cin.getline(nuevoContacto.celular, 11);
    cout << "Ingrese el email del contacto: ";
    cin.getline(nuevoContacto.email, 30);
    Contactos.push_back(nuevoContacto);
    cout << "Contacto ingresado correctamente." << endl;
}

void MostrarContactos(vector<AgendaTelefonica> Contactos)
{
    if (Contactos.empty())
    {
        cout << "No hay contactos para mostrar." << endl;
    }
    else
    {
        cout << "LISTADO DE CONTACTOS:" << endl;
        cout << "=====================" << endl;
        for (int i = 0; i < Contactos.size(); i++)
        {
            cout << "\tNombre: " << Contactos[i].nombre << endl;
            cout << "\tTelefono: " << Contactos[i].telefono << endl;
            cout << "\tCelular: " << Contactos[i].celular << endl;
            cout << "\tEmail: " << Contactos[i].email << endl;
            cout << "\t---------------------" << endl;
        }
    }
}

void BuscarContacto(vector<AgendaTelefonica> Contactos, char nombre[30])
{
    bool encontrado = false;
    for (int i = 0; i < Contactos.size(); i++)
    {
        if (strcmp(Contactos[i].nombre, nombre) == 0)
        {
            cout << "CONTACTO ENCONTRADO" << endl;
            cout << "===================" << endl;
            cout << "\tNombre: " << Contactos[i].nombre << endl;
            cout << "\tTelefono: " << Contactos[i].telefono << endl;
            cout << "\tCelular: " << Contactos[i].celular << endl;
            cout << "\tEmail: " << Contactos[i].email << endl;
            encontrado = true;
        }
    }
    if (!encontrado)
    {
        cout << "Contacto no encontrado." << endl;
    }
}

void ModificarContacto(vector<AgendaTelefonica> &Contactos, char nombre[30])
{
    bool encontrado = false;
    for (int i = 0; i < Contactos.size(); i++)
    {
        if (strcmp(Contactos[i].nombre, nombre) == 0)
        {
            cout << "MODIFICAR CONTACTO" << endl;
            cout << "==================" << endl;
            cout << "Ingrese el nuevo telefono: ";
            cin.ignore();
            cin.getline(Contactos[i].telefono, 8);
            cout << "Ingrese el nuevo celular: ";
            cin.getline(Contactos[i].celular, 11);
            cout << "Ingrese el nuevo email: ";
            cin.getline(Contactos[i].email, 30);
            cout << "Contacto modificado correctamente." << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado)
    {
        cout << "Contacto no encontrado." << endl;
    }
}

void EliminarContacto(vector<AgendaTelefonica> &Contactos, char nombre[30])
{
    bool encontrado = false;
    for (int i = 0; i < Contactos.size(); i++)
    {
        if (strcmp(Contactos[i].nombre, nombre) == 0)
        {
            Contactos.erase(Contactos.begin() + i);
            cout << "Contacto eliminado correctamente." << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado)
    {
        cout << "Contacto no encontrado." << endl;
    }
}

void MenuOpciones(vector<AgendaTelefonica> &Contactos)
{
    int opcion;
    char nombre[30];
    opcion = 0;
    do
    {
        system("cls");
        cout << "MENU DE OPCIONES" << endl;
        cout << "================" << endl;
        cout << "\t1. Ingresar Contacto" << endl;
        cout << "\t2. Listado de Contactos" << endl;
        cout << "\t3. Buscar Contacto" << endl;
        cout << "\t4. Modificar Contacto" << endl;
        cout << "\t5. Eliminar Contacto" << endl;
        cout << "\t0. SALIR" << endl;
        cout << "\n\tIngrese la opcion: ";
        cin >> opcion;
        switch (opcion)
        {
            case 0:
                break;
            case 1:
                system("cls");
                IngresarContactos(Contactos);
                system("pause");
                break;  
            case 2:
                system("cls");
                MostrarContactos(Contactos);
                system("pause");
                break;
            case 3:
                system("cls");
                cout << "Ingrese el nombre del contacto a buscar: ";
                cin.ignore();
                cin.getline(nombre, 30);
                BuscarContacto(Contactos, nombre);
                system("pause");
                break;
            case 4:
                system("cls");
                cout << "Ingrese el nombre del contacto a modificar: ";
                cin.ignore();
                cin.getline(nombre, 30);
                ModificarContacto(Contactos, nombre);
                system("pause");
                break;
            case 5:
                system("cls");
                cout << "Ingrese el nombre del contacto a eliminar: ";
                cin.ignore();
                cin.getline(nombre, 30);
                EliminarContacto(Contactos, nombre);
                system("pause");
                break;
            default:
                cout << "No existe la opcion ingresada." << endl;
                system("pause");
                break;
        }
    } while (opcion != 0);
}