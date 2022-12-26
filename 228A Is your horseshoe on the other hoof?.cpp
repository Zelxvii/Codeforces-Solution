#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int sum = 0;
	if(a == b) sum++;
	if(a == c) sum++;
	if(a == d) sum++;
	if(a != b){
		if(b == c){
			sum++;
		}
		if(b == d){
			sum++;
		}
	}
	if((a != c) && (b != c)){
		if(c == d){
			sum++;
		}
	}
	cout << sum;
}
