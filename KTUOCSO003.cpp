#include<bits/stdc++.h>
using namespace std;

#define ll long long


int check(ll n){
    if(n==1) return 0;
    ll res = 1;
    for(ll i=2; i<=sqrt(n); i++){
        if(n % i == 0){
            res += i;
            if(i != n/i){
                res += n/i;
            }
        }
    }
    return res == n;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(check(n)){
            cout << 1 << endl;
        }
        else
            cout << 0 << endl;
    }
}