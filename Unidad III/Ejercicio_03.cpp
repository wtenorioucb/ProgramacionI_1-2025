#include <iostream>
#include <fstream> // Archivos

using namespace std;

int main()
{
    // Declara variable para manejar archivos
    ofstream archivo; // Escritura
    // 1. Abrir el archivo
    archivo.open("NombreArchivo.txt", ios::app);
    // 2. Verificar si el archivo se abrió correctamente
    system("cls");
    if (archivo.fail())
    {
        cout << "Error al abrir el archivo." << endl;
    }
    else
    {
        cout << "Archivo en buen estado." << endl;
        // 2. Ingresar datos al archivo
        archivo << "Hola Mundo 1." << endl;
        archivo << "Hola Mundo 2." << endl;
        archivo << "Hola Mundo 3." << endl;
        // 3. Cerrar el archivo
        archivo.close();    
    }

    ifstream archivoLectura;
    // 1. Abrir el archivo
    archivoLectura.open("NombreArchivo.txt", ios::in);
    // 2. Verificar si el archivo se abrió correctamente
    if (archivoLectura.bad())
    {
        cout << "Error al abrir el archivo." << endl;
    }
    else
    {
        // 3. Leer datos del archivo
        string lineaTexto;
        while (!archivoLectura.eof())
        {
            // 4. Leer una línea del archivo
            getline(archivoLectura, lineaTexto);
            // 5. Mostrar la línea leída
            cout << lineaTexto << endl;
        }
        archivoLectura.close();
    }
    return 0;
}

