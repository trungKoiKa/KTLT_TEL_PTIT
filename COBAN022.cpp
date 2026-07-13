#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int x, y, m; cin >> x >> y >> m;
		
		int res = m/x;
		int wrap = res;
		
		while(wrap >= y){
			int doi = wrap / y;
			res += doi;
			
			wrap = doi + wrap % y;
		}
		cout << res << endl;
	}
}
