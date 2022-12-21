#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, i;
	int sum = 0;
	cin >> n;
	for(i = 1; i <= n; i++){
		string s;
		cin >> s;
		if(s[1] == '+'){
			sum++;
		}
		else{
			sum--;
		}
	}
	cout << sum;
}
