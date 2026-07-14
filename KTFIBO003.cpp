#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll f[93];

void fibo(){
	f[0] = 1;
	f[1] = 1;
	
	for(int i=2; i<93; i++){
		f[i] = f[i-1] + f[i-2];
	}
}

int main(){
	
	fibo();
	
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		
		for(int i=0; i<93; i++){
			if(f[i] > n){
				if(f[i] - n == 1){
					cout << f[i] + 1 << endl;
					break;
				}
				else{
					cout << n + 1 << endl;
					break;
				}
			}
		}
	}
}
