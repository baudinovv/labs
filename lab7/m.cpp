#include <iostream>
#include <math.h>
#include <algorithm> 

using namespace std;


int progression(int n, int b){
    b++;
    cout << b << " ";
    if(n == b){
        return 0;
    }
    return progression(n , b);
}


int main(){
    int a;
    cin >> a;
    progression(a, 0);
}