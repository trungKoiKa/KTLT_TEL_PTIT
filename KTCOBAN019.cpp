#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(ll n){
    if(n <= 1) return n;
    ll x = sqrt(n);
    ll a = n % 2 + solve(n/2), b = n % 3 + solve(n/3), c = n - x * x + solve(x);
    return 1 + min({a, b, c}); 
}
int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << solve(n) << endl;
    }
}