// https://codeforces.com/problemset/problem/706/B

#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define all(x) (x).begin(), (x).end()
 
int main() {
    ll x, y, el, moedas; cin>>x;
    vector<ll> v;
 
    while (x--){
        cin >> el;
        v.push_back(el);
    }
 
    sort(all(v));
 
    cin >> y;
    while (y--){
        cin >> moedas;
        auto it = upper_bound(all(v), moedas);
        ll indice = it - v.begin();
        
        if (indice == 0){
            cout << 0 << "\n";
        } else {
            cout << indice << "\n";
        }
    }
 
    return 0;
}