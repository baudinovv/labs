#include <iostream>
#include <string>

using namespace std;

string toBaseK(int n, int k){
    string result = "";

    if(n == 0){
        result = "";
    } else{
        while(n>0){
            int remainder = n % k;
            char digit;

            if(remainder < 10){
                digit = "0" + remainder;
            } else{
                digit = "A" + (remainder - 10);
            }
        
            result = digit + result;
            n /= k;
        }
    }
    return result;
}

int main(){
    int n;
    int k;
    cin >> n >> k;

    if( k < 2 || k > 36){
        return 1;
    }
    string result = toBaseK(n,k);

    cout << result;

    return 0;
}