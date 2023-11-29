#include <iostream>
#include <algorithm>


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
    int pos1 = 0;
    int pos2 = 0;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            if(arr[i][j] >= max){
                max = arr[i][j];
                pos1 = i;
                pos2 = j;
            }
        }
    }
    arr[pos1][pos2] = 0;    
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            if(arr[i][j] == max){
                arr[i][j] = 0;
            }
        }
    }



    int max2 = arr[0][0];
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            if(arr[i][j] >= max2){
                max2 = arr[i][j];
            }
        }
    }
    cout << max2;
    return 0;
}