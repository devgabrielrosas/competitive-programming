// Importar biblioteca
#include <bits/stdc++.h>
// Não precisar especificar a biblioteca
using namespace std;

#define pi 3.14 // Constante

int main(){
    int num_conta, idade, valor; // Declaração variável
    string nome;

    cout << "Seu nome: "; // Saída
    cin >> nome; // Entrada
    cout << "Sua idade: ";
    cin >> idade;   


    cout << "Olá, " << nome << "!\n";
    cout << "Sua idade: " << idade << endl;

    return 0; // Padrão
}