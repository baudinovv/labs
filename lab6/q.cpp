#include <iostream>

using namespace std;


int func(int n, int k){  
    int perc = 50;
    int huy = 100;
    cout << perc % huy;
    return 0;
}


int main(){
    int a, b;
    cin >> a >> b;

    func(a, b);
}