#include <iostream>
#include <math.h>

using namespace std;


int main(){

    int a;
    int m;
    cin >> a;
    cin >> m;
    int arr[a][m];
    int cnt = 0;

    for(int i = 0; i < a; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }           
    }    

    int minimum = arr[0][0];

     for(int i = 0; i < a; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] < minimum){
                minimum = arr[i][j];
            }
        }           
    }  
    int min = minimum;

    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            arr[i][0] = arr[i][0] + arr[i][j + 1];        
        }        
    }  
    int pos = 1;
    for(int i = 0; i < a; i++){
        if(arr[i][0] < min){
            min = arr[i][0];
            pos = i + 1;
        }
    }

    cout << pos;
}