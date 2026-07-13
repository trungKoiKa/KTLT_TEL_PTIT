#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll sum = 0;
	string s;
	while(cin >> s){
		sum += s.length();
	}
	cout << sum;
}
