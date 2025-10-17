// Problema de vetor unidimensional: 3.5 (http://g4m3.c073.com/problemas/P0015/)

#include <bits/stdc++.h>
using namespace std;
#define vi vector <int>

int main() {

    int x, entrada, count=0; cin >> x;
    vi gfm(4);

    while (count<x){
        cin >> entrada;
        if (entrada!=0){
            count++;
            gfm.push_back(entrada);
            sort(gfm.begin(), gfm.end());
        } else {
            count--;
            cout << gfm[(gfm.size()-1)] << "\n";
            gfm.pop_back();
        }
    }

    return 0;
}