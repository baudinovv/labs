#include <iostream>
#include <math.h>

using namespace std;


int main(){

    int a;
    
    cin >> a;
    double b = 0;
    if(sqrt(a) * sqrt(a) == a){
        b = sqrt(a);
    }
    a = sqrt(a);
    cout << b << " " << a << endl;
    if(b == a){
        cout << "perfect";
    }
}