// Problema condiconal: Medalhas (https://neps.academy/br/exercise/2)

#include <bits/stdc++.h>
using namespace std;

int main(){

    int t1, t2, t3; cin>>t1>>t2>>t3;
    if (t1<t2 && t2<t3){
        cout << 1 << endl << 2 << endl << 3 << endl;  
    } else if (t2<t1 && t1<t3){
        cout << 2 << endl << 1 << endl << 3 << endl;  
    } else if (t3<t1 && t1<t2){
        cout << 3 << endl << 1 << endl << 2 << endl;  
    } else if (t3<t2 && t2<t1){
        cout << 3 << endl << 2 << endl << 1 << endl;  
    } else if (t2<t3 && t3<t1){
        cout << 2 << endl << 3 << endl << 1 << endl;  
    } else {
        cout << 1 << endl << 3 << endl << 2 << endl;  
    }

    return 0;
}