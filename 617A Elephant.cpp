#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a;
	b = a%5;
	if(b == 0){
		cout << a/5;
	}
	else if(b != 0){
		cout << a/5 +1;
	}
}
