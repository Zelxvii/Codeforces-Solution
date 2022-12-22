#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	char word;
	cin >> s;
	int u = 0;
	int l = 0;
	for(int i = 0; i < s.length(); i++){
		if(islower(s[i])){
			l++;
		}
		else{
			u++;
		}
	}
	if((l > u) || (l == u)){
		for(int i = 0; i < s.length(); i++){
			word = tolower(s[i]);
			cout << word;
		}
	}
	else{
		for(int i = 0; i < s.length(); i++){
			word = toupper(s[i]);
			cout << word;
		}
	}
}
