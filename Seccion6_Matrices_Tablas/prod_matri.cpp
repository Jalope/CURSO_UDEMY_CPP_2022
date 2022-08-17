#include<iostream>

using namespace std; 


void mostrar(int matriz[3][3], int filas, int columnas);

//{P: dim A = dim B}
//{Q: \forall i, j: 0 <= i <= N, j: 0 <= j <= N: p[i][j] = a[i][k]*b[k][j]}
int main(){

    int m1[3][3] = {2,0,1,
                    3,0,0,
                    5,1,1};
    
    int m2[3][3] = {1,0,1,
                    1,2,1,
                    1,1,0};

    int result[3][3];

    int aux = 0; 

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                aux += m1[i][k] * m2[k][j];
            }   
            result[i][j] = aux; 
            aux = 0; 
        }
    }
    
    mostrar(result, 3, 3);

    return 0; 
}

void mostrar(int matriz[3][3], int filas, int columnas){
    cout << "["; 
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            if (i < (filas - 1)){
            cout << matriz[i][j] << ", ";
            }
            else if (j < (columnas -1)){
                cout << matriz[i][j] << ", ";
            }
            else cout << matriz[i][j];
        }
        if (i < (filas -1)){
            cout << endl;
        }
         
    }
    cout << "]" << endl;
}