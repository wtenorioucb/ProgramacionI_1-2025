#include <iostream>

using namespace std;

void DibujarTablero(char[3][3]);
char VerificarGanador(char[3][3]);
bool MarcarPosisicon(int, char[3][3], char);
void JugarTresEnRaya(char[3][3], char[3][3]);

int main()
{
    char Posiciones[3][3] = { {'1', '2', '3'},
                              {'4', '5', '6'},
                              {'7', '8', '9'} };
    char TresEnRaya[3][3] = { {' ', ' ', ' '},
                              {' ', ' ', ' '},
                              {' ', ' ', ' '} };
    JugarTresEnRaya(TresEnRaya, Posiciones);
    return 0;
}


void DibujarTablero(char tablero[3][3])
{
    cout << "\t " << tablero[0][0] << " | " << tablero[0][1] << " | " << tablero[0][2] << endl;
    cout << "\t---|---|---" << endl;
    cout << "\t " << tablero[1][0] << " | " << tablero[1][1] << " | " << tablero[1][2] << endl;
    cout << "\t---|---|---" << endl;
    cout << "\t " << tablero[2][0] << " | " << tablero[2][1] << " | " << tablero[2][2] << endl;
}

char VerificarGanador(char tablero[3][3]) {
    for (int i = 0; i < 3; i++) 
    {
        if (tablero[i][0] == tablero[i][1] && tablero[i][1] == tablero[i][2] && tablero[i][0] != ' ') 
            return tablero[i][0];
        if (tablero[0][i] == tablero[1][i] && tablero[1][i] == tablero[2][i] && tablero[0][i] != ' ') 
            return tablero[0][i];
    }
    if (tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2] && tablero[0][0] != ' ') 
        return tablero[0][0];
    if (tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0] && tablero[0][2] != ' ') 
        return tablero[0][2];
    return ' ';
}

bool MarcarPosisicon(int posicion, char tablero[3][3], char Marcador)
{
    int row = (posicion - 1) / 3;
    int col = (posicion - 1) % 3;

    if (tablero[row][col] != 'X' && tablero[row][col] != 'O')
    {
        tablero[row][col] = Marcador;
        return true;
    }
    else
    {
        return false;
    }
}

void JugarTresEnRaya(char tablero[3][3], char posiciones[3][3])
{
    bool sw = true;
    int posicion;
    int jugador = 1;
    char marcador;
    int turnos = 0;
    do
    {
        system("cls");
        DibujarTablero(posiciones);
        cout << "Turno del JUGADOR " << jugador << endl;
        cout << "===================" << endl;
        DibujarTablero(tablero);
        cout << "\nElija una posicion: ";
        cin >> posicion;
        if (posicion < 0 || posicion > 9) {
            cout << "Posicion no valida. Intente de nuevo." << endl;
            system("pause");
        }
        else
        {
            if (jugador == 1)
                marcador = 'X';
            else
                marcador = 'O';
            if (MarcarPosisicon(posicion, tablero, marcador))
            {
                DibujarTablero(tablero);
                turnos++;
                system("pause");
                if (jugador == 1)
                    jugador = 2;
                else
                    jugador = 1;
            }
            else
            {
                cout << "Posicion marcada. Intente de nuevo." << endl;
                sw = true;
                system("pause");
            }
        }
    } while (sw && VerificarGanador(tablero) == ' ' && turnos < 9);
    system("cls");
    DibujarTablero(tablero);
    if (VerificarGanador(tablero) != ' ')
        cout << "El jugador " << VerificarGanador(tablero) << " ha ganado!" << endl;
    else
        cout << "Es un empate!" << endl;    
}