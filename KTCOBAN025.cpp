#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int t; cin >> t;
	
	ll C[33] = {0};
	
	C[0] = 1;
	
	for(int n = 0; n <= 30; n++){
		for(int i = 0; i <= n; i++){
			C[n+1] += C[i] * C[n-i];
		}
	}
	
	while(t--){
		int n; cin >> n;
		cout << C[n] << endl;
	}
}
