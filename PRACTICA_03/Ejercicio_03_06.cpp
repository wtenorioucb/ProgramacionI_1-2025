#include <iostream>
using namespace std;
int ano, mes (int, int);
int main (){
    int a, m;
    cout << "Ingrese el ano: ";
    cin >> a;
    cout << "Ingrese el mes: ";
    cin >> m;
    cout << "El mes " << m << " del ano " << a << " tiene " << mes(a, m) << " dias." << endl;
    return 0;
}

int mes (int ano, int mes){ //se crea la funcion que evalua los dias de un mes y determina si es bisiesto o no
    int dias;
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        dias = 31;
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){ //se evalua si el mes tiene 30 dias
        dias = 30;
    }
    else if (mes == 2){ //se evalua si el mes es febrero
        if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
            dias = 29;
        }
        else { //se evalua si el ano es bisiesto
            dias = 28;
        }
    }
    return dias;
}


