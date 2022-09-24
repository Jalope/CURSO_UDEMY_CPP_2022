#include<iostream> 
using namespace std; 

bool es_primo(int* punteroAentero); //para pasarlo como paramentro el tipo es puntero a entero es decir int* 

int main(){
    
    int* punteroAentero; //creamos la variable puntero 
    punteroAentero = new int; //creamos la caja donde almacenar el numero int
    
    cout << "Introduce un numero: " << endl; 
    cin >> *punteroAentero; 
    
    if(*punteroAentero % 2 == 0){
        cout << *punteroAentero << " es par." << endl;
        cout << "Se está almacenando en la direccion: " << punteroAentero << endl;      
    }
    else{
        cout << *punteroAentero << " es impar." << endl;
        cout << "Se está almacenando en la direccion: " << punteroAentero  << endl; 
    }
    
    if (es_primo(punteroAentero)){
        cout << "Es primo" << endl; 
    }
    else{
        cout << "Es compuesto" << endl; 
    }
    return 0; 
}

bool es_primo(int* punteroAentero){
    int d = 2; 
    while(d != *punteroAentero){
        if((*punteroAentero) % d == 0){
            return false;
        }
        d++;
        cout << d << endl; 
    }
    return true; 
}
