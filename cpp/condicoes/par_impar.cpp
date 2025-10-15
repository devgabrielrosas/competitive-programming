// Problema condicional: Par ou Ímpar (https://neps.academy/br/exercise/148)

#include <bits/stdc++.h>
using namespace std;

int main() {

    int x, y, z; cin >> x >> y;
    z = (x+y)%2;
    (z==0) ? cout << "Bino" << endl : cout << "Cino" << "\n";

    return 0;
}