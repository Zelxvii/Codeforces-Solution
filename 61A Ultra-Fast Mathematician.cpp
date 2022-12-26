#include <bits/stdc++.h>
using namespace std;

int main(){
	string s, t;
	string d = "";
	cin >> s >> t;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == t[i]){
			d += "0";
		}
		else{
			d += "1";
		}
	}
	cout << d;
}
