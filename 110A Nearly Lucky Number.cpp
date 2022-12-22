#include <bits/stdc++.h>
using namespace std;

int main(){
	string n;
	int four = 0;
	int seven = 0;
	cin >> n;
	for(int i = 0; i < n.length(); i++){
		if(n[i] == '4'){
			four++;
		}
		else if(n[i] == '7'){
			seven++;
		}
	}
	int sum = four + seven;
	if(sum != 0){
		if((sum == 4) || (sum == 7)){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
	}
	else{
		cout <<"NO";
	}
}
