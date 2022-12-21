#include <bits/stdc++.h>
using namespace std;

int main(){
	int k, n, w;
	int sum = 0;
	cin >> k >> n >> w;
	for(int i = 1; i <= w; i++){
		int p = i*k;
		sum+=p;
	}
	int res = abs(n - sum);
	if(n > sum){
		cout << 0;
	}
	else{
	 cout << res;
}
}
