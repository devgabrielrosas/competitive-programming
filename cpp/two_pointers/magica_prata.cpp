// Problema Two Pointers: Mágica com Prata (http://g4m3.c073.com/problemas/P0215/)

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void magica(int tam, int seq){
    int e, d, soma_xor=0, maior_xor = INT_MIN;

    e = 0;
    d = seq;
    vi pp(tam);
    for(auto &v:pp) cin >> v;
    
    for (int i=e; i<seq; i++){
        soma_xor^=pp[i];
    }
    if (soma_xor>maior_xor) maior_xor = soma_xor;
    
    while (d<tam){
        soma_xor^=pp[e];
        soma_xor^=pp[d];
        if (soma_xor>maior_xor) maior_xor = soma_xor;
        d++;
        e++;
    }
    cout << maior_xor << "\n";
    return;
}


int main() {

    int tamanho, pilhas; cin >> tamanho >> pilhas;
    magica(tamanho, pilhas);

    return 0;
}