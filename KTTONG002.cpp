#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int t; cin >> t;
	while(t--){
		ll l, r; cin >> l >> r;
		ll sum = (r-l+1) * (r+l) / 2;
		cout << sum << endl;
	}
}
