#include<bits/stdc++.h>
using namespace std;

int b[100005];

void abslutPermu(int n, int k){
	if(k == 0){
		for(int i=1; i<=n; i++) cout << b[i] << " ";
		cout << endl;
		return;
	}
	else if((n % (2*k)) != 0){
		cout << -1 << endl;
		return;
	}
	else{
		for(int i=1; i<=n; i+=2*k){
			for(int j=0; j<k; j++){
				b[j + i] = j + i + k;
				b[j + i + k] = j + i;
			}
		}
	}
	
	
	for(int i=1; i<=n; i++){
		cout << b[i] <<" ";
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		for(int i=1; i<=n; i++) b[i] = i;
		abslutPermu(n, k);
	}
}
