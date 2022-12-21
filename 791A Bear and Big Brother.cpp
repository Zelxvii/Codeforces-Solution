#include <bits/stdc++.h>
using namespace std;

int main(){
	int l, b;
	int sum = 0;
	cin >> l >> b;
	if(l > b){
		cout << 0;
	}
	while (b >= l){
		l = 3*l;
		b = 2*b;
		sum++;
	}
	cout << sum;
}
