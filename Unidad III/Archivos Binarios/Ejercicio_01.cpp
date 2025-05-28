#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

struct AgendaTelefonica
{
    char nombre[30];
    int telefono;
    int celular;
    char email[30];
};

void MenuOpciones(string);
void IngresarContactos(string);
void MostrarContactos(string);
void BuscarContactoPorNombre(string, char[30]);
void ModificarContactoPorNombre(string, char[30]);
void EliminarContactoPorNombre(string, char[30]);

int main()
{
    string NombreArchivo = "Agenda.bin";
    MenuOpciones(NombreArchivo);
    return 0;
}

void MenuOpciones(string NombreArchivo)
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
                system("cls");
                break;
            case 1:
                system("cls");
                IngresarContactos(NombreArchivo);
                system("pause");
                break;  
            case 2:
                system("cls");
                MostrarContactos(NombreArchivo);
                system("pause");
                break;
            case 3:
                system("cls");
                cout << "Ingrese el nombre del contacto a buscar: ";
                cin.ignore();
                cin.getline(nombre, 30);
                BuscarContactoPorNombre(NombreArchivo, nombre);
                system("pause");
                break;
            case 4:
                system("cls");
                cout << "Ingrese el nombre del contacto a modificar: ";
                cin.ignore();
                cin.getline(nombre, 30);
                ModificarContactoPorNombre(NombreArchivo, nombre);
                system("pause");
                break;
            case 5:
                system("cls");
                cout << "Ingrese el nombre del contacto a eliminar: ";
                cin.ignore();
                cin.getline(nombre, 30);
                EliminarContactoPorNombre(NombreArchivo, nombre);
                system("pause");
                break;
            default:
                cout << "No existe la opcion ingresada." << endl;
                system("pause");
                break;
        }
    } while (opcion != 0);
}

void IngresarContactos(string NombreArchivo)
{
    AgendaTelefonica nuevoContacto;
    // Abrir el archivo en modo binario y de append
    ofstream archivo(NombreArchivo, ios::binary | ios::app);
    if (archivo.good())
    {
        cout << "INGRESAR NUEVO CONTACTO" << endl;
        cout << "=======================" << endl;
        cout << "Ingrese el nombre del contacto: ";
        cin.ignore();
        cin.getline(nuevoContacto.nombre, 30);
        cout << "Ingrese el telefono del contacto: ";
        cin >> nuevoContacto.telefono;
        cout << "Ingrese el celular del contacto: ";
        cin >> nuevoContacto.celular;
        cout << "Ingrese el email del contacto: ";
        cin.ignore();
        cin.getline(nuevoContacto.email, 30);
        archivo.write((char *)&nuevoContacto, sizeof(nuevoContacto));
        archivo.close();
        cout << "Contacto ingresado correctamente." << endl;
    }
    else
    {
        cout << "Error al abrir el archivo." << endl;
    }
}

void MostrarContactos(string NombreArchivo)
{
    ifstream archivo;
    AgendaTelefonica contacto;
    int contador = 0;

    archivo.open(NombreArchivo, ios::binary);
    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
    }
    else
    {
        cout << "LISTADO DE CONTACTOS" << endl;
        cout << "==============================================================" << endl;
        cout << "NOMBRE\t\t" << "TELEFONO\t" << "CELULAR\t\t" << "EMAIL" << endl;
        while (archivo.read((char *)&contacto, sizeof(contacto)))
        {
            cout << contacto.nombre << "\t" << contacto.telefono << "\t\t" << contacto.celular << "\t\t" << contacto.email << endl;
            contador++;
        }
        cout << "==============================================================" << endl;
        archivo.close();
        cout << "Se leyeron " << contador << " registros." << endl;
    }
}

void BuscarContactoPorNombre(string NombreArchivo, char NombreBuscar[30])
{
    ifstream archivo;
    AgendaTelefonica contacto;
    bool encontrado = false;

    archivo.open(NombreArchivo, ios::binary);
    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
    }
    else
    {
        while (archivo.read((char *)&contacto, sizeof(contacto)))
        {
            if (strcmp(contacto.nombre, NombreBuscar) == 0)
            {
                cout << "DATOS DEL CONTACTO" << endl;
                cout << "==================" << endl;
                cout << "\tNombre: " << contacto.nombre << endl;
                cout << "\tTelefono: " << contacto.telefono << endl;
                cout << "\tCelular: " << contacto.celular << endl;
                cout << "\tEmail: " << contacto.email << endl;
                encontrado = true;
            }
        }
        archivo.close();
        if (!encontrado)
        {
            cout << "Contacto no encontrado." << endl;
        }
    }
}

void ModificarContactoPorNombre(string NombreArchivo, char NombreBuscar[30])
{
    fstream archivo;
    AgendaTelefonica contacto;
    bool encontrado = false;
    archivo.open(NombreArchivo, ios::binary | ios::in | ios::out);
    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
    }
    else
    {
        while (archivo.read((char *)&contacto, sizeof(contacto)) && !encontrado)
        {
            if (strcmp(contacto.nombre, NombreBuscar) == 0)
            {
                cout << "Contacto encontrado: " << endl;
                cout << "Nombre: " << contacto.nombre << endl;
                cout << "Telefono: " << contacto.telefono << endl;
                cout << "Celular: " << contacto.celular << endl;
                cout << "Email: " << contacto.email << endl;

                cout << "Ingrese el nuevo telefono: ";
                cin >> contacto.telefono;
                cout << "Ingrese el nuevo celular: ";
                cin >> contacto.celular;
                cout << "Ingrese el nuevo email: ";
                cin.ignore();
                cin.getline(contacto.email, 30);

                archivo.seekp(-static_cast<int>(sizeof(contacto)), ios::cur);
                archivo.write((char *)&contacto, sizeof(contacto));
                encontrado = true;
            }
        }
        archivo.close();
        if (!encontrado)
        {
            cout << "Contacto NO encontrado." << endl;
        }
    }
}

void EliminarContactoPorNombre(string NombreArchivo, char NombreBuscar[30])
{
    fstream archivo;
    AgendaTelefonica contacto;
    bool encontrado = false;
    archivo.open(NombreArchivo, ios::binary | ios::in | ios::out);
    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
    }
    else
    {
        fstream tempArchivo("Temporal.bin", ios::binary | ios::out);
        while (archivo.read((char *)&contacto, sizeof(contacto)))
        {
            if (strcmp(contacto.nombre, NombreBuscar) != 0)
            {
                tempArchivo.write((char *)&contacto, sizeof(contacto));
            }
            else
            {
                encontrado = true;
            }
        }
        archivo.close();
        tempArchivo.close();
        remove(NombreArchivo.c_str());
        rename("Temporal.bin", NombreArchivo.c_str());
        
        if (encontrado)
        {
            cout << "Contacto eliminado correctamente." << endl;
        }
        else
        {
            cout << "Contacto NO encontrado." << endl;
        }
    }
}