#include <iostream>
#include <fstream>

using namespace std;

struct Agenda
{
    char nombre[30];
    int edad;
};

void LeerArchivoBinario(string nombreArchivo);
void EscribirArchivoBinario(string nombreArchivo);

int main()
{
    string nombreArchivo = "Agenda.bin";
    system("cls");
    EscribirArchivoBinario(nombreArchivo);
    LeerArchivoBinario(nombreArchivo);
    return 0;
}

void LeerArchivoBinario(string nombreArchivo)
{
    ifstream archivo;
    Agenda contacto;
    int contador = 0;
    archivo.open(nombreArchivo, ios::binary);
    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo." << endl;
        return;
    }
    else
    {
        while (archivo.read((char *)&contacto, sizeof(contacto)))
        {
            cout << "Nombre: " << contacto.nombre << ", Edad: " << contacto.edad << endl;
            contador++;
        }
        archivo.close();
        cout << "Se leyeron " << contador << " registros." << endl;
    }
}

void EscribirArchivoBinario(string nombreArchivo)
{
    ofstream archivo;
    Agenda contacto;
    archivo.open(nombreArchivo, ios::binary|ios::app);
    cout << "Ingrese el nombre: ";
    cin.getline(contacto.nombre, 30);
    cout << "Ingrese la edad: ";
    cin >> contacto.edad;
    cin.ignore();
    archivo.write((char *)&contacto, sizeof(contacto));
    archivo.close();
}