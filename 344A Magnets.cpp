#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int pole = 1;
	string s[n];
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}
	for(int i = 0; i < n - 1; i++){
		if(s[i] != s[i + 1]){
			pole++;
		}
	}
	cout << pole;
}
