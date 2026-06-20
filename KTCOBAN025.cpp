#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	
	ll C[34] = {0};
	C[0] = 1;
	
	for(int n=0; n<=30; n++){
		for(int i=0; i<=n; i++){
			C[n+1] += C[i] * C[n-i]; 
		}
	}
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << C[n] << endl;
	}
}