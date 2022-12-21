#include <bits/stdc++.h>
using namespace std;
 
int main(){
	string uname;
	int sum = 0;
	cin >> uname;
	sort(uname.begin(), uname.end());
	int ul = uname.length();
	for(int i = 0; i < ul; i++){
		if(uname[i] != uname[i + 1]){
			sum++;
		}
	}
	int res = sum%2;
	if(res == 0){
		cout << "CHAT WITH HER!";
	}
	else{
		cout << "IGNORE HIM!";
	}
}
