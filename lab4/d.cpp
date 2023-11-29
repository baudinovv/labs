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
            arr[i][j] = i * j;
        }
    }

    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            cout << arr[i + 1][j] << " ";
        }
        cout << endl;
    }

    return 0;
}