// Problema Two Pointers: Sortudos, ou não (http://g4m3.c073.com/problemas/P0216/)

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main() {
    
    int x, meta; cin >> x >> meta;
    int e = 0, d=x-1;
    bool passou= false;

    vi sorteados(x), acc(x);

    for(auto &v:sorteados)cin >> v;
    acc[0] = sorteados[0];
    for (int i=1; i<x; i++) acc[i] = acc[i-1] + sorteados[i];
    acc.insert(acc.begin(), 0);    

    while (d > 0) {
        if (acc[d]-acc[e]==meta) {
            cout << "YES" << "\n";
            passou = true;
            break;
        } else if ((acc[d]-acc[e]>meta) && e<(d)) {
            e++;
        } else if (acc[d]-acc[e]<meta || e==(d)) {
            e = 0;
            d--;
        }
    } 

    if (d == 0 and acc[d]==meta) {
        cout << "YES" << "\n";
    } else if (!passou) {
        cout << "NO" << "\n";
    }
    
    return 0;
}