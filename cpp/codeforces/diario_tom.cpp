//https://codeforces.com/problemset/problem/855/A
#include <bits/stdc++.h>
using namespace std;

int main(){

    int x; cin >> x;
    vector<string> nomes;
    for (int i = 0; i<x;i++){
        bool user=false;
        string nome; cin >> nome;
        if (i==0){
            cout << "NO" << "\n";
            nomes.push_back(nome);
        } else {
            for (string n: nomes){
                if (n==nome) {
                    user = true;
                }
            }
            nomes.push_back(nome);
            if (user) cout << "YES" << "\n"; else cout << "NO" << "\n";
        }
    }

    return 0;
}
