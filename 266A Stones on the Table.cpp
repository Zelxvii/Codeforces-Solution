#include <bits/stdc++.h>
using namespace std;

int main(){
	int sum = 0;
	int n;
	cin >> n;
	string c;
	cin >> c;
	for(int i = 0; i < n; i++){
		if(c[i] == c[i+1]){
			sum++;
		}
	}
	cout << sum;
}
