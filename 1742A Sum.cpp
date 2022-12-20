#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, i;
	cin >> a;
	for(i = 1; i <= a; i++){
		int b, c, d;
		cin >> b >> c >> d;
		if(b + c == d){
			cout << "YES" << endl;
		}
		else{
			if(b + d == c){
				cout << "YES" << endl;
			}
			else{
				if(c + d == b){
					cout << "YES" << endl;
				}
				else{
					cout << "NO" << endl;
				}
			}
		}
	}
}
