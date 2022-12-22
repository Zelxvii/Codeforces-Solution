#include <bits/stdc++.h>
using namespace std;

int main(){
	int i;
	int sum = 0;
	string s, t;
	cin >> s;
	cin >> t;
	int sl = s.length() - 1;
	for(i = 0; i <= sl; i++){
		if(s[i] == t[sl - i]){
			sum++;
		}
	}
	if(sum != s.length()){
		cout << "NO";
	}
	else{
		cout << "YES";
	}
}
