#include <iostream>
#include <cmath>
 
#include <iomanip> 

using namespace std;

int main(){
    int a;
    cin >> a;
    
    if(a % 2 == 0 && a <= 5 and a >= 2){
        cout << "Not Super\n";
        return 0;
    }
    if(a % 2 == 0 && a <= 20 and a >= 6){
        cout << "Super\n";
        return 0;
    }
    if(a % 2 == 0 && a > 20){
        cout << "Not Super\n";
        return 0;
    }
     if(a % 2 != 0){
        cout << "Super\n";
        return 0;
    }
}