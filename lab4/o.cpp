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
    int max2 = arr[0][0];
    int max3 = 0;
    int c = 1;
    int pos1 = 1;
    int pos2 = 1;

    for(int i = 0; i < a; i++){
        max = arr[i][-1 + c];
        if(max > max2){
            pos1 = i + 1;
            pos2 = c;
            max2 = max;
        }
        c++;
    }
    
    cout << "Maximum element is: " << max2 << " with coordinates: " << pos1 << ";" << pos2;
    return 0;
}