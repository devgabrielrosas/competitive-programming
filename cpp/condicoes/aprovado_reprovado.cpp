// Problema condicional: Aprovado ou reprovado (https://neps.academy/br/exercise/86)
#include <bits/stdc++.h>
using namespace std;

int main(){

    double x, y, media; cin >> x >> y;
    media = (x+y)/2;
    if (media>=7) cout << "Aprovado" << "\n";
    else if (media >=4) cout << "Recuperacao" << "\n";
    else cout << "Reprovado" << "\n";

    return 0;
}