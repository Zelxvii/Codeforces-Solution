#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, i;
	cin >> n;
	for(i = 1; i <= n; i++){
		string s;
		cin >> s;
		int n = s.length();
		if(n > 10){
			cout << s[0] << n-2 << s[n-1] << endl;
		}
		else{
			cout << s << endl;
		}
	}
}
