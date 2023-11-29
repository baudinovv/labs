#include <iostream>
#include <cmath>
 
#include <iomanip> 

using namespace std;

int main(){
    int a;
    cin >> a;
    double b = sqrt(a);

    cout << std::setprecision(10) << std::fixed << b << endl;
}