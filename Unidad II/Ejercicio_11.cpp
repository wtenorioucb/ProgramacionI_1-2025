#include <iostream>
#include <vector>

using namespace std;

void llenarVector(vector<int>&,int);
void mostrarVector(vector<int>&);
int promedio(vector<int>);

int main()
{
    int n = 5;
    vector<int> vector1;
    srand(time(0));
    //cout << "Ingrese el numero de elementos: ";
    //cin >> n;
    llenarVector(vector1,n);
    mostrarVector(vector1);
    cout << "El promedio es: " << promedio(vector1) << endl;
    return 0;
}

void llenarVector(vector<int> &vector1, int n)
{
    for (int i = 0; i < n; i++)
    {
        vector1.push_back(rand() % 1000);
    }
}

void mostrarVector(vector<int> &vector1)
{
    for (int i = 0; i < vector1.size(); i++)
    {
        cout << vector1[i] << "\t";
    }
    cout << endl;
}

int promedio(vector<int> vector1)
{
    int suma = 0;
    for (int i = 0; i < vector1.size(); i++)
    {
        suma += vector1[i];
    }
    return suma / vector1.size();
}