#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

struct Producto
{
    int codigo;
    char nombre[30];
    int cantidad;
    float precio;
};

void MenuOpciones(string);
void NuevoProducto(string);
void MostrarProductos(string);
void BuscaProductoPorCodigo(string, int);
void ModificarProductoPorCodigo(string, int);
void EliminarProductoPorCodigo(string, int);
void LeerArchivoTexto(string);

int main()
{
    string NombreArchivoProductos = "Productos.bin";
    string NombreArchivoVentas = "Productos.bin";

    return 0;
}

void MenuOpciones(string NombreArchivo)
{
    int opcion;
    int CodigoBuscar;
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
                NuevoProducto(NombreArchivo);
                system("pause");
                break;  
            case 2:
                system("cls");
                MostrarProductos(NombreArchivo);
                system("pause");
                break;
            case 3:
                system("cls");
                cout << "Ingrese el codigo del producto a buscar: ";
                cin >> CodigoBuscar;
                BuscaProductoPorCodigo(NombreArchivo, CodigoBuscar);
                system("pause");
                break;
            case 4:
                system("cls");
                cout << "Ingrese el codigo del producto a modificar: ";
                cin >> CodigoBuscar;
                ModificarProductoPorCodigo(NombreArchivo, CodigoBuscar);
                system("pause");
                break;
            case 5:
                system("cls");
                cout << "Ingrese el codigo del producto a eliminar: ";
                cin >> CodigoBuscar;
                EliminarProductoPorCodigo(NombreArchivo, CodigoBuscar);
                system("pause");
                break;
            default:
                cout << "No existe la opcion ingresada." << endl;
                system("pause");
                break;
        }
    } while (opcion != 0);
}

void NuevoProducto(string NombreArchivo)
{
    ofstream archivo;
    Producto producto;
    archivo.open(NombreArchivo, ios::binary | ios::app);
    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
    }
    else
    {
        cout << "Ingrese el codigo del producto: ";
        cin >> producto.codigo;
        cout << "Ingrese el nombre del producto: ";
        cin.ignore();
        cin.getline(producto.nombre, 30);
        cout << "Ingrese la cantidad del producto: ";
        cin >> producto.cantidad;
        cout << "Ingrese el precio del producto: ";
        cin >> producto.precio;

        archivo.write((char *)&producto, sizeof(producto));
        archivo.close();
        cout << "Producto ingresado correctamente." << endl;
    }
}

void MostrarProductos(string NombreArchivo)
{
    ifstream archivo;
    Producto producto;
    int contador = 0;

    archivo.open(NombreArchivo, ios::binary);
    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
    }
    else
    {
        cout << "LISTADO DE PRODUCTOS" << endl;
        cout << "==============================================================" << endl;
        cout << "CODIGO\tNOMBRE\t\tCANTIDAD\tPRECIO" << endl;
        while (archivo.read((char *)&producto, sizeof(producto)))
        {
            cout << producto.codigo << "\t" << producto.nombre << "\t" << producto.cantidad << "\t\t" << producto.precio << endl;
            contador++;
        }
        cout << "==============================================================" << endl;
        archivo.close();
        cout << "Se leyeron " << contador << " registros." << endl;
    }
}

void BuscaProductoPorCodigo(string NombreArchivo, int CodigoBuscar)
{
    ifstream archivo;
    Producto producto;
    bool encontrado = false;

    archivo.open(NombreArchivo, ios::binary);
    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
    }
    else
    {
        while (archivo.read((char *)&producto, sizeof(producto)) && !encontrado)
        {
            if (producto.codigo == CodigoBuscar)
            {
                cout << "Producto encontrado: " << endl;
                cout << "Codigo: " << producto.codigo << endl;
                cout << "Nombre: " << producto.nombre << endl;
                cout << "Cantidad: " << producto.cantidad << endl;
                cout << "Precio: " << producto.precio << endl;
                encontrado = true;
            }
        }
        archivo.close();
        if (!encontrado)
        {
            cout << "Producto no encontrado." << endl;
        }
    }
}

void ModificarProductoPorCodigo(string NombreArchivo, int CodigoBuscar)
{
    fstream archivo;
    Producto producto;
    bool encontrado = false;

    archivo.open(NombreArchivo, ios::binary | ios::in | ios::out);
    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
    }
    else
    {
        while (archivo.read((char *)&producto, sizeof(producto)) && !encontrado)
        {
            if (producto.codigo == CodigoBuscar)
            {
                cout << "Producto encontrado: " << endl;
                cout << "Codigo: " << producto.codigo << endl;
                cout << "Nombre: " << producto.nombre << endl;
                cout << "Cantidad: " << producto.cantidad << endl;
                cout << "Precio: " << producto.precio << endl;

                cout << "Ingrese la nueva cantidad: ";
                cin >> producto.cantidad;
                cout << "Ingrese el nuevo precio: ";
                cin >> producto.precio;

                archivo.seekp(-static_cast<int>(sizeof(producto)), ios::cur);
                archivo.write((char *)&producto, sizeof(producto));
                encontrado = true;
            }
        }
        archivo.close();
        if (!encontrado)
        {
            cout << "Producto no encontrado." << endl;
        }
    }
}

void EliminarProductoPorCodigo(string NombreArchivo, int CodigoBuscar)
{
    fstream archivo;
    Producto producto;
    bool encontrado = false;

    archivo.open(NombreArchivo, ios::binary | ios::in | ios::out);
    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
    }
    else
    {
        ofstream tempArchivo("Temporal.bin", ios::binary);
        while (archivo.read((char *)&producto, sizeof(producto)))
        {
            if (producto.codigo == CodigoBuscar)
            {
                encontrado = true;
                cout << "Producto eliminado: " << endl;
                cout << "Codigo: " << producto.codigo << endl;
                cout << "Nombre: " << producto.nombre << endl;
                cout << "Cantidad: " << producto.cantidad << endl;
                cout << "Precio: " << producto.precio << endl;
            }
            else
            {
                tempArchivo.write((char *)&producto, sizeof(producto));
            }
        }
        archivo.close();
        tempArchivo.close();
        remove(NombreArchivo.c_str());
        rename("temp.bin", NombreArchivo.c_str());

        if (!encontrado)
        {
            cout << "Producto no encontrado." << endl;
        }
    }
}

void LeerArchivoTexto(string NombreArchivo)
{
    ifstream archivo(NombreArchivo);
    if (archivo.is_open())
    {
        string linea;
        while (getline(archivo, linea))
        {
            cout << linea << endl;
        }
        archivo.close();
    }
    else
    {
        cout << "No se pudo abrir el archivo." << endl;
    }
}

int EncontrarCantidadLineaTexto(string lineaTexto, string CodigoBuscar)
{
    int pos = 0;
    string token;
    int cantidadTotal = 0;
    int contador = 1;
    bool encontrado = false;
    while ((pos = lineaTexto.find(';')) != string::npos)
    {
        token = lineaTexto.substr(0, pos);
        if (contador == 1)
        {
            if (token == CodigoBuscar)
            {
                encontrado = true;
            }
        }
        if (contador == 3 && encontrado)
        {
            cantidadTotal += stoi(token);
        }
        contador++;
        lineaTexto.erase(0, pos + 1);
    }
    if (encontrado)
    {
        return cantidadTotal;
    }
    else
    {
        return 0; // Indica que no se encontró el código
    }
}