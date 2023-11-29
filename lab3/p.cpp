#include <iostream> 
#include <math.h>
 

using namespace std;

int main(){
    int k;
    cin >> k;
    int n = sqrt(k);
    if( n * n == k){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
}
