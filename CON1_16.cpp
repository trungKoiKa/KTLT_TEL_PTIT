#include<bits/stdc++.h>
using namespace std;

int n, k, C[100][100], visited[100], sum;
vector<int> v;
vector<vector<int>> res;

void Try(int row){
	if(sum > k) return;
	if(row == n){
		if(sum == k) res.push_back(v);
		return;
	}
	for(int col=0; col<n; col++){
		if(!visited[col]){
			visited[col] = 1;
			v.push_back(col+1);
			sum += C[row][col];
			Try(row+1);
			sum -= C[row][col];
			v.pop_back();
			visited[col] = 0;
		}
	}
}

int main(){
	cin >> n >> k;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> C[i][j];
		}
	}
	sum = 0;
	res.clear(); v.clear();
	memset(visited, 0, sizeof(visited));
	Try(0);
	cout << res.size() << endl;
	for(auto row:res){
		for(int x:row) cout << x << " ";
		cout << endl;
	}
	return 0;
}
