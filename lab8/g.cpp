#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int isPrime(int a){
    int cnt = 0;
    for(int i = 1; i <= a; i++){
        if(a % i == 0){
            cnt++;
        }
    }
    if(cnt == 2){
        return true;
    } else{
        return false;
    }
}

int main(){
    int a;
    int cnt = 0;
    cin >> a;
    int k;
    vector<int> arr;
    int digit;
    for(int i = 0; i < a; i++){
        cin >> digit;
        arr.push_back(digit);
    }
    cin >> k;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > k){
            if(isPrime(arr[i])){
               cnt++;
            }
        }
    }
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}