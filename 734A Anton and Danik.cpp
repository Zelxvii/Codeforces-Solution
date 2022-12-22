#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string s;
	cin >> n;
	cin >> s;
	int A = 0;
	int D = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == 'A'){
			A++;
		}
		else{
			D++;
		}
	}
	if(A > D){
		cout << "Anton";
	}
	else if(A < D){
		cout << "Danik";
	}
	else{
		cout << "Friendship";
	}
}
