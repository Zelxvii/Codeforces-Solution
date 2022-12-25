#include <bits/stdc++.h>
using namespace std;

int main(){
	int y;
	int x[4];
	cin >> y;
	for(int i = y + 1; i <= 10000; i++){
		x[0] = i / 1000;
		x[1] = (i / 100) % 10;
		x[2] = (i / 10) % 10;
		x[3] = i % 10;
		if((x[0] != x[1]) && (x[0] != x[2]) && (x[0] != x[3]) && (x[1] != x[2]) && (x[1] != x[3]) && (x[3] != x[2])){
			cout << i;
			break;
		}  
	}
}
