#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


void func(string n, int cnt, int summa){
    for(int i = 0; i < n.size(); i++){
        summa = summa + n[i] - '0';
    }
    cout << summa;
}


int main(){
    string a;
    cin >> a;
    int cnt = 0;
    int summa = 0;
    func(a, cnt , summa);
}