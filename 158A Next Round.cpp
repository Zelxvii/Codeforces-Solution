#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, i;
	cin >> n >> k;
	int arr[n];
	for(i = 0; i < n; i++){
		cin >> arr[i];
	}
	k = arr[k - 1];
	int sum = 0;
	for(i = 0; i < n; i++){
		if((arr[i] >= k) && (arr[i] > 0)){
			sum++;
		}
	}
	cout << sum;
}
