#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    double a;
    cin >> a;
    double b = pow(2,a);
    cout << setprecision(10) << b;
}