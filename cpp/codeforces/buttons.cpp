// https://codeforces.com/contest/268/problem/B

#include <bits/stdc++.h>
using namespace std;
 
int main (){
 
    int x, soma; cin >> x;
    soma = x;
 
    for (int i = 1; i<x; i++){
        soma+= (x-(x-i))*(x-i);
    }
 
    cout << soma << "\n";
 
    return 0;
 
}