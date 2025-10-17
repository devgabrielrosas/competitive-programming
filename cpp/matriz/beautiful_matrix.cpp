// Problema de Matriz: Beautiful Matrix (https://codeforces.com/problemset/problem/263/A)

#include <bits/stdc++.h>
using namespace std;

int main() {

    int matriz[5][5], i_ideal, j_ideal, saida;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> matriz[i][j];
            if (matriz[i][j]==1){
                i_ideal = i;
                j_ideal =j;
            }
        }
    }

    saida= abs(i_ideal-2)+abs(j_ideal-2);
    cout << saida << "\n";

    return 0;
}