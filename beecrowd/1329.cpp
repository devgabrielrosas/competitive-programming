// https://judge.beecrowd.com/pt/problems/view/1329

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define all(x) (x).begin(), (x).end()

int main() {
    while (true){
        int x; cin >> x;
        int v[2] = {0};

        if (x==0){
            break;
        }

        for (int i=0; i<x;i++){
            int y;
            cin >> y;
            if (y==0){
                v[0] += 1;
            } else {
                v[1] += 1;
            }
        }

        cout << "Mary won " << v[0] << " times and John won " << v[1] << " times" << "\n";

    }
}
