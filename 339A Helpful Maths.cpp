#include <bits/stdc++.h>
using namespace std;

int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '1')a++;
		if(s[i] == '2')b++;
		if(s[i] == '3')c++;
	}
	for(int i = 0; i < a; i++){
		cout << "1";
		if(i != a-1){
			cout << "+";
		}
	}
	for(int i = 0; i < b; i++){
		if(a != 0){
			cout << "+2";
		}
		else{
		cout << "2";
		if(i != b-1){
			cout << "+";
		}
	}
	}
	for(int i = 0; i < c; i++){
		if((a != 0) || (b != 0)){
			cout << "+3";
		}
		else{
		cout << "3";
		if(i != c-1){
			cout << "+";
		}
	}
	}
}
