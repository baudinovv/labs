#include <iostream>
#include <math.h>


using namespace std;

int main(){
    int a;
    int m;
    cin >> a >> m;
    
    int arr[a][m];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
      }
    }

    int cnt = 0;

    for(int i = 0; i < a; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] < 0){
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}