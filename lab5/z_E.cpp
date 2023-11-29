#include <iostream>
#include <cmath>
using namespace std;
bool SumEvenOdd(string s) {
    int SumEven=0, SumOdd=0;
    for(int i=0; i<s.length(); i++){
        if(i%2==0){
            if(s[i]=='1'){
                SumEven+=1;
            }
            else if(s[i]=='2'){
                SumEven+=2;
            }
            else if(s[i]=='3'){
                SumEven+=3;
            }
            else if(s[i]=='4'){
                SumEven+=4;
            }
            else if(s[i]=='5'){
                SumEven+=5;
            }
            else if(s[i]=='6'){
                SumEven+=6;
            }
            else if(s[i]=='7'){
                SumEven+=7;
            }
            else if(s[i]=='8'){
                SumEven+=8;
            }
            else if(s[i]=='9'){
                SumEven+=9;
            }
        }
        else{
            if(s[i]=='1'){
                SumOdd+=1;
            }
            else if(s[i]=='2'){
                SumOdd+=2;
            }
            else if(s[i]=='3'){
                SumOdd+=3;
            }
            else if(s[i]=='4'){
                SumOdd+=4;
            }
            else if(s[i]=='5'){
                SumOdd+=5;
            }
            else if(s[i]=='6'){
                SumOdd+=6;
            }
            else if(s[i]=='7'){
                SumOdd+=7;
            }
            else if(s[i]=='8'){
                SumOdd+=8;
            }
            else if(s[i]=='9'){
                SumOdd+=9;
            }
        }
    }
    return SumEven==SumOdd;
}
int main() {
    string s;
    cin >> s;

    if (SumEvenOdd(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
