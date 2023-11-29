#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


void findN(int n, int arr[], int f){
    bool flag = true;
    for(int i = 0; i < n; i++){
        if(arr[i] == f){
            cout << "Yes";
            flag = false;
            break;
        }
    }
    if(flag == true){
        cout << "No";
    }
}


int main(){
    int a;
    cin >> a;
    int arrA[a];
    for(int i = 0; i < a; i++){
        cin >> arrA[i];
    }
    int b;
    cin >> b;

    findN(a, arrA, b);
}