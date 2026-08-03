#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		ll sum1 = 0, sum2 = -1e18;
		
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		for(int i=0; i<n; i++){
			sum1 += a[i];
			
			sum2 = max(sum1, sum2);
			
			if(sum1 < 0) sum1 = 0;
		}
		cout << sum2 << endl;
	}
}
