#include <iostream>

using namespace std;


int main(){

    int a;
    int m;
    cin >> a >> m;;

    int arr[a][m];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];    
        }
    }
    
    int min = arr[0][0];
    int pos1 = 1;
    int pos2 = 1;
    int cnt = 0;
    cout << "coordinates of min elements: " << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < a; j++){
            if(arr[j][i] < min){
                min = arr[j][i];
                pos1 = j + 1;
                pos2 = i + 1;
            }
        }
        cnt = cnt + min;
        cout << pos1 << ";" << pos2 << endl;
        
        min = arr[0][i + 1];
    }
    cout << "" << endl;
    cout << "Their sum:" << endl << cnt;
    return 0;
}