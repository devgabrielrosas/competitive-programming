// Famílias e Números (http://g4m3.c073.com/problemas/P0069/)
// COMPLEXIDADE DE ALGORITMO: O(N)

#include <bits/stdc++.h>
using namespace std;

bool saber_primo(int valor){
    int div = 2;
    if (valor<2) return false;
    for (int i=2; i<valor; i++){
        if (valor%i==0){
            div ++;
            if (div>2) return false;
        }
    }
    return true;
}

int main(){
    int x, xmenos, xmais; cin >> x;
    xmais = x+1;
    xmenos = x-1;

    if (saber_primo(xmais) && saber_primo(xmenos)){
        cout << x << " " << "TIA" << "\n";
    } else {
        cout << x << " " << "NAH" << "\n";
    }

    return 0;
}