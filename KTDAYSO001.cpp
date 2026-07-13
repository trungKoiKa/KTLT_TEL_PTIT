#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
		int t; cin >> t;
		while(t--){
			int n; cin >> n;
			int a[n];
			for(int i = 0; i < n; i++){
				cin >> a[i];
			}	
			if(n <= 2){
				cout << "YES" << endl;
				continue;
			}
			int d = a[1] - a[0];
			bool ok = true;
			
			for(int i = 2; i < n; i++){
				if(a[i] - a[i-1] != d){
					cout << "NO" << endl;
					ok = false;
					break;
				}
			}
			if(ok) cout << "YES" << endl;
		}
		
}
