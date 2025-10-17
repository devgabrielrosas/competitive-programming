// Problema de matriz: 4.2 (http://g4m3.c073.com/problemas/P0017/)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, quant_o=0, quant_plus=0, quant_menos=0; cin >> x;
    vector <vector<int>> matriz(x, vector<int>(x));

    for (int i=0; i<x; i++){
        for (int j=0; j<x; j++){
            cin >> matriz[i][j];
            if (matriz[i][j]+10<=100) {
                quant_plus ++;
                cout << "+";
            }
            else if (matriz[i][j]+10>=101 && matriz[i][j]+10<=110){
                quant_o++;
                cout << "o";
            } else {
                quant_menos ++;
                cout << "-";
            }
        }
        cout << "\n";
    }

    cout << "\n";
    cout << "+: " << quant_plus << "\n";
    cout << "o: " << quant_o << "\n";
    cout << "-: " << quant_menos << "\n";



    return 0;
}