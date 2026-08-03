#include<bits/stdc++.h>
using namespace std;

int N, cnt = 0;
int X[100], col[100], cross1[100], cross2[100];


void Try(int i){
	for(int j=1; j<=N; j++){
		if(col[j] == 1 && cross1[i - j + N] == 1 && cross2[i + j - 1] == 1){
			X[i] = j;
			col[j] = cross1[i - j + N] = cross2[i + j - 1] = 0;
			if(i == N){
				cnt++;
			}
			else{
				Try(i + 1);
			}
			col[j] = cross1[i - j + N] = cross2[i + j- 1] = 1;
		} 
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> N;
		cnt = 0;
		for(int i = 1; i <= 100; i++){
			col[i] = cross1[i] = cross2[i] = 1;
		}
		Try(1);
		cout << cnt << endl;
	}
}
