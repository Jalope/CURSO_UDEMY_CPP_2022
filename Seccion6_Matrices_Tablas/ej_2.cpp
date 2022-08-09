/* Creación de un mostrar que imprima la diagonal principal */

#include <iostream> 

using namespace std;

void mostrar(int matriz[10][10], int filas, int columnas);

int main(){

    int matriz[10][10], filas, columnas; 
    int elemento = 0; 

    cout << "Introduce un número de filas menor que 10: "; cin >> filas;
    cout << "Introduce un número de columnas menor que 10: "; cin >> columnas;

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout << "Introduce el emento " << i << ", " << j << ": " << endl; 
            cin >> elemento; 
            matriz[i][j] = elemento; 
        }   
    }
    cout << endl; 

    mostrar(matriz, filas, columnas); 

    return 0; 
}

void mostrar(int matriz[10][10], int filas, int columnas){
    cout << "Diagonal principal: ";
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            if(i == j and j != columnas){
                cout << matriz[i][j] << " "; 
            }
        }        
    }
}