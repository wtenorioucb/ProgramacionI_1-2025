#include <iostream>

using namespace std;

int resultado_division(int dividendo, int divisor, int& residuo);
int resultado_residuo(int dividendo, int divisor);

int main()
{
    int residuo = 0;
    system("cls");
    cout << "19 / 7 = " << resultado_division(19,7,residuo) << endl;
    cout << "El residuo es: " << residuo;
    return 0;
}

int resultado_division(int dividendo, int divisor, int& residuo)
{
    int resultado = 0;
    resultado = dividendo / divisor;
    residuo = resultado_residuo(dividendo, divisor);
    return resultado;
}

int resultado_residuo(int dividendo, int divisor)
{
    int resultado = 0;
    resultado = dividendo % divisor;
    return resultado;
}
