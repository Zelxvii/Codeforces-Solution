#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s = "";
	for(int i = 1; i <= n; i++){
		if(i == n){
			if(i % 2 == 0){
				s += "I love it"; 
			}
			else{
				s += "I hate it";
			}
		}
		else{
			if(i % 2 == 0){
				s += "I love that ";
			}
			else{
				s += "I hate that ";
			}
		}
	}
	cout << s;
}
