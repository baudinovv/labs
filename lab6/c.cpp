#include <iostream>

using namespace std;


void function(int a[] , int b[], long s ){
    long cnt = 0;
    int j = 0;
    
    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++){
            if(a[i] == b[j]){
                cnt++;
                b[j] = 0;
            }
        }    
    }
    cout << cnt;
}


int main(){
    int a;
    cin >> a;
    int arrA[a];
    int arrB[a];
    int i = 0;s
    int j = 0;
    
    while(i < a){
        
        cin >> arrA[i];

        i = i + 1;
    }

    i = 0;

    while(i < a){
        
        cin >> arrB[i];

        i = i + 1;
    }

    function(arrA, arrB, a);
    return 0;

}