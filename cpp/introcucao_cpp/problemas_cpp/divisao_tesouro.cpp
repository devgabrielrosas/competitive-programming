// Problema básico: Divisão do Tesouro (https://neps.academy/br/exercise/976)

#include <bits/stdc++.h>
using namespace std;

int main() {

    int num_moedas, num_marinheiros, valor_capitao;
    cin >> num_moedas >> num_marinheiros;

    valor_capitao = (num_moedas/(num_marinheiros+2))*2;
    cout << valor_capitao << endl;

    return 0;
}