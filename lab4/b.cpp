#include <iostream>
#include <math.h>


using namespace std;

int main(){
    int a;
    int m = 0;
    cin >> a;
    
    int arr[a][a];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            cin >> arr[i][j];
      }
    }

    int max = arr[0][0];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            if(arr[i][j] >= max){
                max = arr[i][j];
            }
        }
    }

    cout << max;

    return 0;
}