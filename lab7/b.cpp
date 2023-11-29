#include <iostream>


using namespace std;


void func(int n){
    int arr[32], i = 0, num = n;
    
	while(n != 0){
		arr[i] = n % 2;
		i++;
		n = n / 2;
	}

	for(i = i - 1; i >= 0;i--){
		cout << arr[i];
	}
	cout << endl;
}


int main(){
    int a;
    cin >> a;
	
    func(a);
}