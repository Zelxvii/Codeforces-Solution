#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, p, q;
	int sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> p >> q;
		int r = q - 2;
		if(p <= r){
			sum++;
		}
	} 
	cout << sum;
}
