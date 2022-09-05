//Escribir funciones que sea usables para tipos de datos diferentes 

#include <iostream>

using namespace std; 

template <class T>
T maximo (T dato1, T dato2, T dato3);

int main(){
    int dato1 = 11; 
    int dato2 = 9; 
    int dato3 = 8;
   
    cout << "El valor maximo es: " << maximo(dato1, dato2, dato3) << endl; 
    return 0;
}

template <class T>
T maximo (T dato1, T dato2, T dato3){
    T max; //max será del tipo paramétrico

    if ((dato1 >= dato2) && (dato1 >= dato3)){
        max = dato1; 
    }
    else if((dato2 >= dato1) && (dato2 >= dato3)){
            max = dato2; 
        } else max = dato3;

    return max;
}