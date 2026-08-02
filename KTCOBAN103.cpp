#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> gt;
		double sum = 0;
		
		for(int i=1; ceil(sum) <= n; i++){
			sum += log10(i);
			
			if(ceil(sum) == n){
				gt.push_back(i);
			}
		}
		
		if(gt.empty()){
			cout << "NO" << endl;
		}
		else{
			cout << gt.size() << " ";
			for(int x : gt){
				cout << x << " ";
			}
			cout << endl;
		}
	}
}
