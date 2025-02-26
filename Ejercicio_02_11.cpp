#include <iostream>
using namespace std;

int main () {
    int n;
    int a;
    int total;
    int suma=0;
    int n1,n2,n3;
    n1=0;n2=0;n3=0;
    cout <<"introduzca numero de kindergardianos";
    cin >> n;
    for (int i=1; i<=n;i++){
        a = rand() % 3;
        switch (a){
            case 1:
                n1++;
            case 2:
                n2++;
            case 3:
                n3++;
        }
    }
    suma= n1+n2+n3;
    if (suma <= n){
        total = n1*6 + n2*3 + n3*2;
    }
    cout <<"la cantidad de paniales es ", total; 
     
    return 0;
}