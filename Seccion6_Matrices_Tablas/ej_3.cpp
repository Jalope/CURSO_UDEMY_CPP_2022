/* Copiar una matriz dos por dos y copiarlo a otra matriz */

#include <iostream> 

using namespace std; 

void mostrar(int matriz[2][2], int filas, int columnas);

int main(){
    
    int matriz[2][2] = {1, 2,
                        3, 4};

    int matriz_copia[2][2]; 

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++)
        {
            matriz_copia[i][j] = matriz[i][j];
        }
    }
    
    mostrar(matriz_copia, 2, 2);

    return 0;
}


void mostrar(int matriz[2][2], int filas, int columnas){
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