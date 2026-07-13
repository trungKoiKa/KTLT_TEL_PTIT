#include<bits/stdc++.h>
using namespace std;
#define ll long long

int tong(int l, int r){
	if(l % 2 == 0){
		l++;
	}
	if(r % 2 == 0){
		r--;
	}
	return ((r-l)/2+1)*(l+r)/2;
}

int main(){
	int t; cin >> t;
	while(t--){
		int l, r; cin >> l >> r;
		cout << tong(l, r) << endl;
	}
}
