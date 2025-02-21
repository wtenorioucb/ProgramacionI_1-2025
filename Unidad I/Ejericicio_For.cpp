#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int n = 0;
    system("cls");
    SetConsoleOutputCP(65001); 
    cout << "¿Cuántos números desea generar?: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << "\t";
    }
    return 0;
}
