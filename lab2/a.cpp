#include <iostream>
#include <cmath>
 
#include <iomanip> 

using namespace std;

int main(){
    int a;
    cin >> a;
    
    if(a == 0){
        cout << "None\n";
        return 0;
    }
    if(a % 2 == 0){
        cout << "Even\n";
        return 0;
    } else
        cout << "Odd\n";
}