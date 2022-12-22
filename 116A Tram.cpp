#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int a, b, pt;
	int mc = 0;
	int po = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a >> b;
		pt = po - a + b;
		po = pt;
		if(pt > mc){
			mc = pt;
		}
		}
		cout << mc;
	}
