#include <iostream>
#include <vector>

using namespace std;

float generaDesviacion(vector<float>, float);

int main()
{
    vector<float> calificaciones = {10.00, 9.00, 8.00, 7.00, 6.00, 5.00, 4.00, 3.00, 2.00, 1.00};
    cout << "La desviacion es: " << generaDesviacion(calificaciones, 5.5) << endl;
    return 0;
}

float generaDesviacion(vector<float> calificaciones, float promedio)
{
    float desviacion = 0.0;
    float tamanio = 0;
    tamanio = size(calificaciones);
    for (int i = 0; i < tamanio; i++)
    {
        desviacion += calificaciones[i] - promedio;
    }
    return desviacion / tamanio;
}
