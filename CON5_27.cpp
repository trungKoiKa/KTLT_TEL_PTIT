#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, v; cin >> n >> v;
        int a[n], c[n];
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> c[i];
        vector<int> cost(v+1, 0);

        for(int i=0; i<n; i++){
            for(int j=v; j >= a[i]; j--){
                cost[j] = max(cost[j], cost[j - a[i]] + c[i]); 
            }
        }
        cout << cost[v] << endl;
    }
}