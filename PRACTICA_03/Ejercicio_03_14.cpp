#include <iostream>

using namespace std;

bool VerificarSaldo(int montoRetirar, int saldo);
bool VerificarMontoMultiplo10(int montoRetirar);
int ActualizarSaldo(int montoRetirar, int saldo);

int main()
{
    int montoRetirar = 0;
    int saldo = 1000;

    do
    {
        system("cls");
        cout << "Ingrese el monto a retirar: ";
        cin >> montoRetirar;
        if (VerificarSaldo(montoRetirar, saldo))
        {
            if (VerificarMontoMultiplo10(montoRetirar))
            {
                saldo = ActualizarSaldo(montoRetirar, saldo);
                cout << "Su saldo final es: " << saldo;
            }
            else
            {
                cout << "Monto invalido!!";
                system("pause");
            }
        }
        else
        {
            cout << "NO TIENES PLATA!!!";
            system("pause");
        }
    } while (!(VerificarSaldo(montoRetirar, saldo) && VerificarMontoMultiplo10(montoRetirar)));
    return 0;
}

bool VerificarSaldo(int montoRetirar, int saldo)
{
    if (montoRetirar <= saldo)
        return true;
    else
        return false;
}

bool VerificarMontoMultiplo10(int montoRetirar)
{
    if (montoRetirar % 10 == 0)
        return true;
    else
        return false;
}

int ActualizarSaldo(int montoRetirar, int saldo)
{
    int saldoActualizado = 0;
    saldoActualizado = saldo - montoRetirar;
    return saldoActualizado;
}
