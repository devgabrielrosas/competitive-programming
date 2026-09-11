// https://neps.academy/br/exercise/546

#include <bits/stdc++.h>
using namespace std;

int main(){

    int tam, sorteado;
    string nome;
    vector<string> nomes;
    
    cin >> tam >> sorteado;
    
    for (int i = 0; i<tam;i++) {
        cin >> nome;
        nomes.push_back(nome);  
    }

    sort(nomes.begin(), nomes.end());

    cout << nomes[sorteado-1] << "\n";

    return 0;
}