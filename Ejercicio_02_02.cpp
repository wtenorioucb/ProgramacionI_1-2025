#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

main (){
    srand(time(NULL));
    int n;
    int suma=0;
    cout << "Ingrese el número de veces que se lanzara el dado: ";
    cin >> n;
    int veces;
    for (int i = 1; i <=n ; i++)
    {
        veces=rand()%6+1;
        cout << "El dado cayó en: " << veces << endl;
        if (veces%2==0)
        {
            suma++;
        }
        
    }
    cout << "El número de veces que cayó un número par es: " << suma << endl;

}
