#include <iostream>

using namespace std;


int func(int arr[]){
    int max = arr[0];
    for(int i = 0; i < 4; i++){   
        if(arr[i] > max ){
            max = arr[i];
        }
    }
    
    cout << max;

    return 0;
}


int main(){
    int arrA[4];
    for(int i = 0; i < 4; i++){
        cin >> arrA[i];
    }
    func(arrA);
}