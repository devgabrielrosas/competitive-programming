// Problema matemático: Super primos (https://judge.beecrowd.com/pt/problems/view/2674)

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

bool isPrimo(int x){
    if (x==1) return false;
    if (x==2) return true;
    if (x%2==0) return false;
    for (int i=3; i*i<=x; i+=2){
        if (x%i==0) return false;
    }
    return true;
}

bool isSuperPrimo(vi x){
    for (int digito: x){
        if (digito != 2 && digito != 3 && digito != 5 && digito != 7) return false;
    }
    return true;
}


int main(){
    int num;
    string entrada;
    
    while (cin >> entrada){
        if (!isPrimo(stoi(entrada))) cout << "Nada" << "\n";
        else{
            vi algarismos;
            for (char caractere: entrada){
                num = caractere - '0';
                algarismos.push_back(num);
            }
            (isSuperPrimo(algarismos)) ? cout << "Super" << "\n" : cout << "Primo" << "\n";
        }
    }   
}