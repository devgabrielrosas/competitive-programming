// Problema condicional: Gangorra (https://neps.academy/br/exercise/260)

#include <bits/stdc++.h>
using namespace std;

int main(){

    int p1, c1, p2, c2, ladoE, ladoD; cin >> p1 >> c1 >> p2 >> c2;
    ladoE = p1*c1;
    ladoD = p2*c2;

    if (ladoE==ladoD) cout << "0" << endl;
    else if (ladoE<ladoD) cout << "1" << endl;
    else cout << "-1" << endl;

    return 0;
}