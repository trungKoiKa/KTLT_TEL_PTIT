#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        ll l, r; cin >> l >> r;
        ll a = sqrt(l);
        ll b = sqrt(r);
        if(a * a < l) a++;
        cout << b - a + 1 << endl;
    }
}