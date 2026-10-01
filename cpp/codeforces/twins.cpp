// https://codeforces.com/problemset/problem/160/A

#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

int main (){

    int x, inside, soma_total=0, soma_nec=0, quant=0, divisao; cin >> x;
    vector<int> vetor;

    for (int i=0;i<x;i++) {
        cin >> inside;
        vetor.push_back(inside);
    }

    sort(rall(vetor));

    for (int elemento: vetor){
        soma_total += elemento;
    }
    divisao = soma_total/2;

    for (int elemento: vetor){
        soma_nec += elemento; quant++;
        if (soma_nec>divisao) {
            cout << quant << "\n";
            break;    
        }
    }
    return 0;
}