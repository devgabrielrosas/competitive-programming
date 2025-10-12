#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2, soma, sub, resto, produto;
    cin >> num1 >> num2;

    // Incremento

    num1= num1 + 1;
    num1+= 1;
    num1++;

    cout << num1 << endl;


    soma = num1 + num2;
    cout << num1 << " + " << num2 << " = " << soma << endl;
    produto = num1*num2;
    cout << num1 << " * " << num2 << " = " << produto << "\n";
    resto = num1 % num2;
    cout << num1 << " % " << num2 << " = " << resto << endl;
    sub = num1 - num2;
    cout << num1 << " - " << num2 << " = " << sub << "\n";
    
    
    return 0;
}