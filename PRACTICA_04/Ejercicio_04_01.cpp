#include <iostream>
using namespace std;

void intercambiarValores(int&, int&);

int main () {
    int n1, n2;
    cout << "ingrese 2 numeros: " << endl;
    cin >> n1 >> n2;
    cout << "Sin intercambiar sus valores: " << n1 << "  " << n2 << endl;
    intercambiarValores(n1, n2);
    cout << "Intercambiando sus valores: " << n1 << "  " << n2 << endl;
    return 0;
}

void intercambiarValores(int &num1, int &num2){
    int aux = num1;
    num1 = num2;
    num2 = aux;
}