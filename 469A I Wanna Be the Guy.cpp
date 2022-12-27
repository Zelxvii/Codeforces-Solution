#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, p, q, arr[201], skill = 0;
	cin >> n;
	cin >> p;
	for(int i = 0; i < p; i++){
		cin >> arr[i];
	}
	cin >> q;
	for(int i = p; i < p + q; i++){
		cin >> arr[i];
	}
	sort(arr, arr+(p+q));
	for(int i = 0; i < p + q; i++){
		if(arr[i] != arr[i + 1]){
			skill++;
		}
	}
	if(skill == n){
		cout << "I become the guy.";
	}
	else{
		cout << "Oh, my keyboard!";
	}
}
