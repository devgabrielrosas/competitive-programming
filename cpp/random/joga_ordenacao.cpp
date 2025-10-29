// Jogo da Ordenação (http://g4m3.c073.com/problemas/P0087/)
// COMPLEXIDADE DE ALGORITMO: O(N * Log N) 

#include <bits/stdc++.h>
using namespace std;
#define vll vector<long long>

int fat(int n){
    if (n==0 || n==1) return 1;
    else return n*fat(n-1);
}

int main(){
    map <int, int> dicionario;
    vll lista1, lista2, freq;
    long long x, entrada, saida=1; cin >> x;


    for (int i=0; i<x; i++){
        cin >> entrada;
        lista1.push_back(entrada);
        cin >> entrada;
        lista2.push_back(entrada);
    }

    // Parte pesada do código
    for (int num: lista2){
        dicionario[num]++;
    } 

    for (const auto& par : dicionario) {
        freq.push_back(par.second);
    }

    for (int num: freq){
        saida*=fat(num);
    }

    cout << saida << "\n";

    return 0;
}