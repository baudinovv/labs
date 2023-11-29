#include <iostream>

using namespace std;


int func(string n , int k){
    int cnt = 0;
    bool flag = true;
    for(int i = 0; i < n.size(); i++){
        if(n[i] % 2 != 0){
            cout << "Not valid";
            flag == false;
            break;
        } 
    }
    if(flag == true){
        cout << "Valid";
    }
    return 0;
}


int main(){
    string a;
    cin >> a;

    int b;
    cin >> b;

    func(a, b);
}