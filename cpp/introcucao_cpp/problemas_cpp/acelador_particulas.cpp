// Problema básico: Acelerador de Partículas (https://neps.academy/br/exercise/822)

#include <bits/stdc++.h>
using namespace std;

int main() {

    int distancia, sensor_atingido;

    cin >> distancia;
    sensor_atingido = ((distancia-3)%8)-2;
    cout << sensor_atingido << endl;

    return 0;
}