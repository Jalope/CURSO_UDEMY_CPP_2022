/* Crear una funcion que calcule la matriz traspuesta */

#include <iostream> 

using namespace std; 

void mostrar(int matriz[3][3], int filas, int columnas);

int main(){

    int matriz[3][3] = {1, 2, 3,
                        4, 5, 6,
                        7, 8, 9};

    int traspuesta[3][3]; 

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            traspuesta[j][i] = matriz[i][j];
        }
    }
    
    mostrar(traspuesta, 3, 3);

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