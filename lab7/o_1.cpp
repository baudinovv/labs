#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


void toSystem(int a, int b){
    char k = 48;
    a = a - 10;
    for(int i = 0; i < a; i++){
        k++;    
    }
    cout << k;
}


int main(){
    int a;
    int b;
    cin >> a >> b;

    toSystem(a,b);
}