// Problema condicional: Positivo, negativo ou nulo (https://neps.academy/br/exercise/145)

#include <bits/stdc++.h>
using namespace std;

int main() {

    int dona_monica, filho1, filho2, filho3; cin >> dona_monica >> filho1 >> filho2;
    filho3 = dona_monica-filho1-filho2;

    if (filho3>filho2 && filho3>filho1) {
        cout << filho3 << endl;
    } else if (filho2>filho1 and filho2>filho3) {
        cout << filho2 << endl;
    } else {
        cout << filho1 << endl;
    }

    return 0;
}