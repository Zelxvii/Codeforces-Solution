#include <bits/stdc++.h>
using namespace std;

int main(){
	string a, b;
	cin >> a;
	cin >> b;
	for(int i = 0; i < a.length(); i++){
		a[i] = tolower(a[i]);
	}
	for(int i = 0; i < b.length(); i++){
		b[i] = tolower(b[i]);
	}
	if(a.compare(b) == 0){
		cout << 0;
	}
	else if(a.compare(b) > 0){
		cout << 1;
	}
	else{
		cout << -1;
	}
}
