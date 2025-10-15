// Problema básico: Irmãos (https://neps.academy/br/exercise/978)

#include <bits/stdc++.h>
using namespace std;

int main() {

    int idade_meio, idade_velho, idade_novo;

    cin >> idade_novo >> idade_meio;
    idade_velho = idade_meio+abs(idade_novo-idade_meio);
    
    cout << idade_velho << endl;

    return 0;
}