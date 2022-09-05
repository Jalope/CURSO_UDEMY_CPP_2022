#include <iostream>

using namespace std; 

//Prototipo de funciones
void pedir_Datos(); 
float parte_decimal(float x); 

float num1; 

//Función principal
int main(){
    pedir_Datos(); 
    
    cout << "La parte decimal es: " << parte_decimal(num1); 

    return 0; 
}


//Definición de funciones auxiliares
void pedir_Datos(){
    cout << "Introduce un numero decimal: " << endl; 
    cin >> num1; 
}

float parte_decimal(float x){
    int entero = x;                 //C++ solo almacena lo que corresponde al tipo indicado. 
    float resultado = x - entero; 
    return resultado;  
}