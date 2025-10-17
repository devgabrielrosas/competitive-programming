// Problema: 4.1 (http://g4m3.c073.com/problemas/P0016/)

#include <bits/stdc++.h>
using namespace std;

int main(){

    int x, c=1; cin >> x;

    while (x!=1) {
        c++;
        x/=2;
    }

    cout << c << "\n";

    return 0;
}