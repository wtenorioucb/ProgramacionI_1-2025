#include <iostream>

using namespace std;

int main()
{
    int opcion;
    int opcion_submenu;
    opcion = 0;
    opcion_submenu = 0;
    do
    {
        system("cls");
        cout << "MENU DE OPCIONES" << endl;
        cout << "================" << endl;
        cout << "\t1. Opcion 1" << endl;
        cout << "\t2. Opcion 2" << endl;
        cout << "\t3. Opcion 3" << endl;
        cout << "\t0. SALIR" << endl;
        cout << "\n\tIngrese la opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case 0:
            break;
        case 1:
            do
            {
                system("cls");
                cout << "MENU DE OPCION 1" << endl;
                cout << "================" << endl;
                cout << "\t1. Opcion 1.1" << endl;
                cout << "\t2. Opcion 1.2" << endl;
                cout << "\t0. SALIR" << endl;
                cout << "\n\tIngrese la opcion: ";
                cin >> opcion_submenu;
                switch (opcion_submenu)
                {
                case 0:
                    break;
                case 1:
                    cout << "Usted ha ingresado a la opcion 1.1" << endl;
                    system("pause");
                    break;
                case 2:
                    cout << "Usted ha ingresado a la opcion 1.2" << endl;
                    system("pause");
                    break;
                default:
                    cout << "No existe la opcion ingresada." << endl;
                    system("pause");
                    break;
                }
            } while (opcion_submenu != 0);
            break;
        case 2:
            cout << "Usted ha ingresado a la opcion 2" << endl;
            system("pause");
            break;
        case 3:
            cout << "Usted ha ingresado a la opcion 3" << endl;
            system("pause");
            break;
        default:
            cout << "No existe la opcion ingresada." << endl;
            system("pause");
            break;
        }
    } while (opcion != 0);
    return 0;
}