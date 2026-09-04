// Problema de vetor unidimensional: Botas trocadas (https://neps.academy/br/exercise/19)

#include <bits/stdc++.h>

using namespace std;

int main(){

    int valor, num, pares = 0;
    string lado;
    
    cin >> valor; 

    int esq[valor], dir[valor];

    for (int i=0;i<valor;i++){
        cin >> num >> lado;
        if (lado=="E") {esq[i] = num; dir[i]=0;}
        else{ dir[i] = num; esq[i]=0;}
    }

    for (int i = 0; i<valor; i++){
        if (esq[i]>0){
            for (int j = 0; j<valor; j++){
                if (esq[i]==dir[j] and dir[j]>0){
                    pares+=1;
                    esq[i] = -1; dir[j] = -1;
                }
            }
        }
    }
    cout << pares << endl;
    return 0;
}
