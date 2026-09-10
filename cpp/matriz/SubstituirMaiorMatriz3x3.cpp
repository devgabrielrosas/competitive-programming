//Problema: https://neps.academy/br/exercise/202

#include <iostream>

using namespace std;

int main(){    	
    int inside[3][3], maior=-2147483648;

    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cin >> inside[i][j];
        }
    }
    
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            int atual = inside[i][j];
            if (atual>maior) maior = atual; 
        }
    }

    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            int &atual = inside[i][j];
            if (atual==maior) atual = -1; 
        }
    }

    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            int atual = inside[i][j];
            if (j!=2){
                cout << atual << " ";   
            } else if (j==2 && i!=2){
                cout << atual << "\n";
            } else {
                cout << atual;
            }
            
        }
    }
    
    return 0;
}
