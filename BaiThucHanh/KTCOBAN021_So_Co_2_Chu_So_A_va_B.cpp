#include<bits/stdc++.h>
using namespace std;

#define MAX 1000000000000000001
#define ll long long

ll backtrack(ll val, int a, ll cnt1, int b, ll cnt2, ll N, ll len){
	ll pos = cnt1 + cnt2;
	
	if(pos > len + 2 || val > MAX){
		return MAX;
	}
	
	if(cnt1 == cnt2 && val >= N){
		return val;
	}
	
	return min(backtrack(val*10+a, a, cnt1 + 1, b, cnt2, N, len),
				backtrack(val*10+b, a, cnt1, b, cnt2 + 1, N , len));
}

ll solve(ll N, int a, int b){
	ll val = 0;
	ll cnt1 = 0, cnt2 = 0;
	
	int len = 1 + floor(log10(N));
	
	if(a == b){
		while(val < N){
			val = val * 10 + a;
		}
		return val;
	}
	
	return backtrack(val, a, cnt1, b, cnt2, N, len);
}

int main(){
	int t; cin >> t;
	while(t--){
		ll N; cin >> N; 
		int a, b;
		cin >> a >> b;
		cout << solve(N, a, b) << endl;
	}
}
