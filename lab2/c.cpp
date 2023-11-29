#include <iostream>
#include <cmath>
 
#include <iomanip> 

using namespace std;

int main(){
    int a;
    cin >> a;
    
    if(a % 4 == 0 && a / 100 != 0 && a % 400 > 0 || a % 400 == 0 ){
        cout << "YES\n"; 
    } else{
        cout << "NO\n";
    }
    int num = 2000;
}