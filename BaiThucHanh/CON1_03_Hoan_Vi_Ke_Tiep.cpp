#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x:a) cin >> x;
		if(next_permutation(a, a+n)){
			for(int x:a) cout << x << " ";
		}
		else{
			for(int i=0; i<n; i++) cout << i+1 << " "; 
		}
		cout << endl;
	}
	return 0;
}
