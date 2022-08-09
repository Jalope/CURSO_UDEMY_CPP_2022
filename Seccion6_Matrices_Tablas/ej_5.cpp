/* Sumar matrices*/

#include <iostream> 

using namespace std; 

void mostrar(int matriz[3][3], int filas, int columnas);

int main(){

    int m1[3][3] = {1, 2, 3,
                    4, 5, 6,
                    7, 8, 9};

    int m2[3][3] = {2, 3, 4,
                    5, 6, 7,
                    8, 9, 10};

    int result[3][3]; 

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            result[i][j] = m1[i][j] + m2[i][j];
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