#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a;
	cin >> n;
	int dif = 0;
	for(int i = 1; i <= n; i++){
		cin >> a;
		if(a > 0){
			dif++;
		}
	}
	if(dif > 0){
		cout << "HARD";
	}
	else{
		cout << "EASY";
	}
}
