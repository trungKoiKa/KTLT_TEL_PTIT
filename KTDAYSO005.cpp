#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){
	int t; cin >> t;
	
	while(t--){
		int n; cin >> n;
		int a[n];
		map<int, int> mp;
		
		for(int i=0; i<n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		
		int res = 0;
		
		for(int i=0; i<n; i++){
			if(mp[a[i]] == 1){
				res++;
			}
		}
		cout << res << endl;
	}
}
