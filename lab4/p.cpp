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



    int max = 0;
    int max2 = 0;
    int c = 1;

    for(int i = 0; i < a; i++){
        max = arr[i][a - c];
        max2 = max2 + max;
        c++;
    }
    cout << max2;

    return 0;
}