#include <iostream>

using namespace std;

void MostrarMatriz(char matriz[3][4]);

int main()
{
    char matriz[3][4] = {{'x', 'o', 'x', 'o'}, {'o', 'o', 'o', 'o'}, {'o', 'o', 'x', 'o'}};
    MostrarMatriz(matriz);
    return 0;
}

void MostrarMatriz(char matriz[3][4])
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void NoTieneMuerto(char matriz[3][4])
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == 'x') {
                cout << "No tiene muerto en la fila " << i + 1 << " y columna " << j + 1 << endl;
            }
        }
    }
}

int ContarMuertos(char matriz[3][4])
{
    int contador = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == 'x') {
                contador++;
            }
        }
    }
    return contador;
}

void NoTieneMuerto(char matriz[3][4])
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == 'x') {
                cout << "No tiene muerto en la fila " << i + 1 << " y columna " << j + 1 << endl;
            }
        }
    }
}