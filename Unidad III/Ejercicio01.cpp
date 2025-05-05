#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

struct DatosCitaMedica
{
    char fecha[10];
    int turno;
    char especialidad[30];
};

void IngresarCitasMedicas(vector<DatosCitaMedica>& CitasMedicas);
void MostrarCitasMedicas(vector<DatosCitaMedica> CitasMedicas);

int main()
{
    vector<DatosCitaMedica> CitasMedicas;
    system("cls");
    IngresarCitasMedicas(CitasMedicas);
    MostrarCitasMedicas(CitasMedicas);
    return 0;
}

void IngresarCitasMedicas(vector<DatosCitaMedica>& CitasMedicas)
{
    int n;
    DatosCitaMedica CitaMedica;
    char especialidad;
    cout << "Ingrese el número de citas medicas: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "Ingrese la fecha de la cita (DD/MM/AAAA): ";
        cin.getline(CitaMedica.fecha, 11);
        cout << "Ingrese el turno (1)Mañana (2)Tarde (3)Noche: ";
        cin >> CitaMedica.turno;
        cin.ignore();
        cout << "Ingrese la especialidad (C)Cardiología (G)Ginecología (M)Medicina General: ";
        cin >> especialidad;
        switch (especialidad)
        {
            case 'C':
                strcpy(CitaMedica.especialidad, "Cardiología");
                break;
            case 'G':
                strcpy(CitaMedica.especialidad, "Ginecología");
                break;
            case 'M':
                strcpy(CitaMedica.especialidad, "Medicina General");
                break;
            default:
                break;
        }
        CitasMedicas.push_back(CitaMedica);
    }
}

void MostrarCitasMedicas(vector<DatosCitaMedica> CitasMedicas)
{
    for (int i = 0; i < CitasMedicas.size(); i++)
    {
        cout << "CITA MEDICA " << i + 1 << endl;
        cout << "----------------------------------------" << endl;
        cout << "\tFecha: " << CitasMedicas[i].fecha << endl;
        switch (CitasMedicas[i].turno)
        {
            case 1:
                cout << "\tTurno: Mañana" << endl;
                break;
            case 2:
                cout << "\tTurno: Tarde" << endl;
                break;
            case 3:
                cout << "\tTurno: Noche" << endl;
                break;
        }
        cout << "\tEspecialidad: " << CitasMedicas[i].especialidad << endl;
        cout << "----------------------------------------" << endl;
    }
}