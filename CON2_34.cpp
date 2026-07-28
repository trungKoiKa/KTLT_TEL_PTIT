#include<bits/stdc++.h>
using namespace std;
#define ll long long

int a[9][9], col[9], c1[100], c2[100], ans;

void Try(int i, int score){
	
	for(int j=1; j <= 8; j++){
		if(col[j] || c1[i - j + 8] || c2[i + j -1]) continue;
		col[j] = c1[i - j + 8] = c2[i + j -1] = 1;
		
		if(i == 8 && score + a[i][j] > ans) 
			ans = score + a[i][j];
		if(i < 8){
			Try(i+1, score + a[i][j]);
		}
		
		col[j] = c1[i - j + 8] = c2[i + j - 1] = 0;
	}
}


int main(){
	int t; cin >> t;
	while(t--){
		for(int i=1; i<=8; i++){
			for(int j=1; j<=8; j++){
				cin >> a[i][j];
			}
		}
		ans = 0;
		
		Try(1, ans);
		cout << ans << endl;
	}
}
