#include <iostream>

using namespace std;


int main(){
    int n;
    cin >> n;

    int k[n];

    for(int i = 0; i < n; i++){
        cin >> k[i];        
    }

    int max = k[0];
    for(int i = 0; i < n; i++){
        if(k[i] > max){
            max = k[i];
        }
    }

    int min = k[0];
    for(int i = 0; i < n; i++){
        if(k[i] < min){
            min = k[i];
        }
    }
    cout << max - min << endl;
    
    return 0;
}