#include <iostream>

using namespace std;

int main (){
    for(int i = 2; i <= 9; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }

        for(int k = i - 1; k >= 1; k--){
            cout << k;
        }

        cout << endl;
    }
}