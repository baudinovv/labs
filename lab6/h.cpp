#include <iostream>

using namespace std;


int func(string n){
    int cnt = 0;
    bool flag = true;
    for(int i = 0; i < n.size(); i++){
        if(n[i] % 2 != 0){
            flag = false;
            break;
        } 
    }
    if(flag == true){
        cout << "Valid";
    } else{
        cout << "Not valid";
    }
    return 0;
}


int main(){
    string a;
    cin >> a;

    func(a);
}