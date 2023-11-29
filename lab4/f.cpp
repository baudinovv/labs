#include <iostream>
#include <math.h>


using namespace std;

int main(){
    int a;
    cin >> a;
    
    int arr[a][a];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            cin >> arr[i][j];
      }
    }
    // 1 1
    int max = arr[0][0];
    int pos = 1;
    int pos2 = 1;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
                pos2 = j + 1;
                pos = i + 1;
            }
        }
    }

    cout << pos <<  " " << pos2 << endl;
    return 0;
}