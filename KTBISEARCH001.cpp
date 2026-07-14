#include<bits/stdc++.h>
using namespace std;
#define ll long long

int binarySearch(int a[], int n, int l, int r, int x){
	int res = -1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] == x){
			res = m;
			r = m - 1;
		}
		else if(a[m] > x){
			r = m-1;
		}
		else{
			l = m+1;
		}
	}
	return res + 1;
}

int main(){
	int n, m; cin >> n >> m;
	int a[n], b[m];
	
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	for(int i=0; i<m; i++){
		cin >> b[i];
	}
	
	for(int i=0; i<m; i++){
		cout << binarySearch(a, n, 0, n-1, b[i]) << " ";
	}
}
