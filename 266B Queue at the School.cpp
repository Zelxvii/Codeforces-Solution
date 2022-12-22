#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, t;
	cin >> n >> t;
	string q;
	cin >> q;
	for(int i = 1; i <= t; i++){
		for(int j = 0; j < n; j++){
			if((q[j] == 'B') && q[j + 1] == 'G'){
				swap(q[j], q[j + 1]);
				j++;
			}
		}
	}
	cout << q;
}
