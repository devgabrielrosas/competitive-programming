// Problema condicional: Flíper (https://neps.academy/br/exercise/87)

#include <bits/stdc++.h>
using namespace std;

int main() {

    int p1, p2; cin >> p1 >> p2;

    if (p1==0) {
        cout << "C" << endl;
    } else if (p1 == 1 && p2 == 0) {
        cout << "B" << "\n";
    } else {
        cout << "A" << endl;
    }

    return 0;
}