//BUSQUEDA SECUENCIAL 

//a[5] = {3, 4, 2, 1, 5}; dato = 4; ¿4 in a?

#include <iostream>
using namespace std; 

int main(){

    int a[5] = {3, 4, 2, 1, 5}; 
    int dato_1 = 4; 
    int dato_2 = 7; 

    int N = 5; //longitud de la lista
    int n = 0; 

    bool b = false;  

    while ((n != N) && (b == false)){
        if (a[n] == dato_1){
            cout << dato_1 << " pertence a la lista y está en la posicion: " << n << endl;
            b = true; //con esto se busca no recorrer toda la lista  
        }
        n++;  
    }
    
    if (b == false){
        cout << "El elemento no pertenece a la lista" << endl; 
    }
    
    return 0; 
}