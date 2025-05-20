#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    bool encontrado = false;
    vector<string> names = {"Juan", "Pedro", "Maria", "Jose", "Ana"};
    for (int i = 0; i < names.size(); i++)
    {
        if (names[i] == "Maria")
        {
            encontrado = true;
        }
    }
    if (encontrado)
    {
        
    }
    return 0;
}
