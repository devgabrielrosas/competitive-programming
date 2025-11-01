// Problema Matemático: O Teorema de Pitágoras (https://judge.beecrowd.com/pt/problems/view/1582)

#include <bits/stdc++.h>
using namespace std;

bool isPitagorica(int x, int y, int z){
    int maior, soma_catetos;
    
    maior = max(x, max(y, z));
    soma_catetos = pow(x, 2) + pow(y, 2) + pow(z, 2) - pow(maior, 2);
    
    return (soma_catetos==pow(maior, 2));
}

int main(){
    
    int x, y, z, mdc;
    
    while (cin>> x >> y >> z){
        if (!isPitagorica(x, y, z)) cout << "tripla" << "\n";
        else {
            mdc = gcd(x, gcd(y, z));
            (mdc==1) 
            ? cout << "tripla pitagorica primitiva" << "\n" 
            : cout << "tripla pitagorica" << "\n";
        }


    }

    return 0;
}
