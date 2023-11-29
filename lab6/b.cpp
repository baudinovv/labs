#include <iostream>

using namespace std;


int func(int a[] , int b[], int s ){
    for(int i; i < s; i++){
        if(b[i] > a[i]){
            cout << b[i] - a[i] << " ";
        } else{
            cout << a[i] - b[i] << " ";
        }
    }

    return 0;
}


int main(){
    int a;
    cin >> a;
    int arrA[a];
    int arrB[a];

    for(int i = 0; i < a; i++){
        cin >> arrA[i];
    }
    for(int i = 0; i < a; i++){
        cin >> arrB[i];
    }

    func(arrA, arrB, a);
    return 0;
}