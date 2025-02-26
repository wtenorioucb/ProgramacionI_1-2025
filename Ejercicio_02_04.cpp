#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

main (){
    srand(time(NULL));
    int n;
    int suma_cara=0;
    int suma_sello=0;
    cout << "Ingrese el número de veces que se lanzara la moneda: ";
    cin >> n;
    int veces;
    for (int i = 1; i <=n ; i++)
    {
        veces=rand()%2+1;
        
        if (veces==1)
        {
            suma_cara++;
            
        }
        else
        {
            suma_sello++;
        }
        float porcentaje= (suma_cara*100)/n;
        cout << "El número de veces que cayó cara es: " << porcentaje << endl;
        porcentaje = (suma_sello*100)/n;
        cout << "El número de veces que cayó sello es: " << porcentaje << endl;
    }
    

}
