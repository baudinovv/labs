#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    int a;
    cin >> a;
    vector<int> arr;
    int digit;
    for(int i = 0; i < a; i++){
        cin >> digit;
        arr.push_back(digit);
    }
    int b;
    cin >> b;
    arr.erase(arr.begin() + b, arr.begin() + b + 1);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}