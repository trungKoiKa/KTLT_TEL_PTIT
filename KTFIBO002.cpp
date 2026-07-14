#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[93];

void fibo(){
	a[0] = 1;
	a[1] = 1;
	
	for(int i=2; i<93; i++){
		a[i] = a[i-1] + a[i-2];
	}
}

int main(){
	
	fibo();
	int t; cin >> t;
	
	while(t--){
		
		ll n; cin >> n;
		
		ll sum = 0;
		
		for(int i=0; i<93; i++){
			
			if(a[i] > n){
				break;
			}
			
			if(a[i] % 2 == 0){
				sum += a[i];
			}
		}
		
		cout << sum << endl;
	}
}
