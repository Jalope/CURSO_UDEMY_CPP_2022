//Resvisamos cada elemento de la lista que va a ser ordenada con el siguiente. Si estuvieran en un orden equivocado se intercambian de posición. Hay que repetir el proceso hasta que toda la lista quede ordenada. 

/*Ejecución: [4,5,2,1,3]
4 > 5? -> No -> No hacemos nada -> [4,5,2,1,3]  
5 > 2? -> Sí -> Intercambiamos -> [4,2,5,1,3] 
5 > 1? -> Sí -> Intercambiamos -> [4,2,1,5,3]
5 > 3? -> Sí -> Intercambiamos -> [4,2,1,3,5]
4 > 2? -> Sí -> Intercambiamos -> [2,4,1,3,5]
4 > 1? -> Sí -> Intercambiamos -> [2,1,4,3,5]
4 > 3? -> Sí -> Intercambiamos -> [2,1,3,4,5]
4 > 5? -> No -> No hacemos nada -> [2,1,4,3,5]
2 > 1? -> Sí -> Intercambiamos -> [1,2,4,3,5]
... (se sigue preguntando hasta que todas las respuestas sean No)
*/

//IMPLEMENTACIÓN

#include<iostream>

using namespace std; 

void imp_lista(int lista[5], int longitud); 

int main(){

    int numeros[] = {4, 1, 2, 3, 5}; 
    int aux = 0; 

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if(numeros[j] > numeros[j+1]){
                aux = numeros[j]; 
                numeros[j] = numeros[j+1]; 
                numeros[j+1] = aux; 
            }
        }
    }
    
    imp_lista(numeros, 5);

    return 0; 
}

void imp_lista(int lista[5], int longitud){
    cout << "["; 
    for (int i = 0; i < 5; i++){
        if(i < 4){
            cout << lista[i] << ", "; 
        } else {
            cout << lista[i] << "]" << endl;
        }
    }
}