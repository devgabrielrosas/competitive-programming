// https://g4m3.c073.com/problemas/P0271/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define all(x) (x).begin(), (x).end()

void solve()
{
    ll x, y;
    cin >> x;
    vector<vector<ll>> matrix(x, vector<ll>(x, 0)), soma(x, vector<ll>(x, 0));

    for (ll i=0; i<x;i++){
        for (ll j = 0; j < x; j++)
        {
            cin >> matrix[i][j];
            if (j == 0)
            {
                soma[i][j] = matrix[i][j];
            }
            else
            {
                soma[i][j] = matrix[i][j] + soma[i][j - 1];
            }
        }
    }
    
    cin >> y;
    while (y--)
    {
        ll l, c, saida=0; cin >> l >> c;
        for (ll i=0;i<l;i++){
            saida += soma[i][c-1];
        }
        cout << saida << "\n";
    }

    
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    // cin >> T;

    while (T--)
    {
        solve();
    }
}