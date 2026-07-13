#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000001];

int check(ll a[], int n){
	ll d = a[1] - a[0];
	
	for(int i = 2; i < n; i++){
		if(a[i] - a[i-1] != d) return 0;
	}
	return 1;
}


int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			for(int i=0; i<n; i++) cin >> a[i];
			
			if(check(a, n)) cout << "YES\n";
			else cout << "NO\n";
		}
		
}
