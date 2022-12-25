#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, h;
	int a;
	int sum = 0;
	cin >> n >> h;
	for(int i = 1; i <= n; i++){
		cin >> a;
		if(a <= h){
			sum += 1;
		}
		else{
			sum += 2;
		}
	}
	cout << sum;
}
