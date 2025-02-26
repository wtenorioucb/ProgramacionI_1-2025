#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main (){
    srand(time(NULL));
    int n = rand() % (10) + 1;

    int fac = 1, num = 1;

    while(num <= n) {
        fac *= num;
        num++;
    }

    cout << n << "! = " << fac << endl;
