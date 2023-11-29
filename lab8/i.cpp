#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    int a;
    cin >> a;
    vector<int> arr;
    vector<int>::iterator it;
    int digit;
    for(int i = 0; i < a; i++){
        cin >> digit;
        arr.push_back(digit);
    }
    int k;
    cin >> k;
    it = find(arr.begin(), arr.end(), k); 
    if(it != arr.end()){
        cout << "Yes";
    } else{
        cout << "No";
    }
}