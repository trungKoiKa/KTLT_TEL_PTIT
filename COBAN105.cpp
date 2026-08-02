#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		
		priority_queue<ll, vector<ll>, greater<ll>> q;
		
		for(int i=0; i<n; i++){
			ll x;
			cin >> x;
			q.push(x);
		}
		
		ll res = 0;
		while(q.size() > 1){
			ll top1 = q.top(); q.pop();
			ll top2 = q.top(); q.pop();
			
			ll tmp = top1 + top2;
			q.push(tmp);
			
			res += tmp % MOD; 
			 
		}
		cout << res % MOD << endl;
	}
}
