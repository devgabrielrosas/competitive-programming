// Problema condicional: Zerinho ou um (https://neps.academy/br/exercise/88)

#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c; cin >> a >> b >>c; 
    if (a==b && b==c) cout << "*" << endl;
    else if (a==b && b!=c) cout << "C" << endl;
    else if (a==c && b!=c) cout << "B" << endl;
    else cout << "A" << endl;

    return 0;
}