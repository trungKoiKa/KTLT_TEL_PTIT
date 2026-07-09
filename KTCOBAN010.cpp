#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int MOD = 1e9+7;

ll myPow(ll a, ll n){
	
	if(n == 0) return 1;
	
	a %= MOD;
	
	ll x = myPow(a, n/2);
	x = (x * x) % MOD;
	
	if(n % 2 == 1) x = (x * a) % MOD;
	return x;
	
}

int main(){
	int t; cin >> t;
	while(t--){
		ll a, n; cin >> a >> n;
		cout << myPow(a, n) << endl;
	}
}
