#include <iostream>

using namespace std; 

//Prototipo de funciones
void valNuevo(int&, int&); //hacemos un paso por referencia por lo que no hace falta darle nombre 
void valNuevo_sin_ref(int z, int w);


//Funcion principal
int main(){
    int num1, num2; 

    cout << "Introduce dos números: "; 
    cin >> num1 >> num2; 

    valNuevo_sin_ref(num1, num2);  //sin paso por ref
    //Los cambios no se reflejan
    cout << "El nuevo valor para el primer numero es: " << num1 << endl; 
    cout << "El nuevo valor para el segundo numero es: " << num2 << endl; 

    valNuevo(num1, num2);  //con paso por ref
    //Los cambios que hagamos se reflejan 
    cout << "El nuevo valor para el primer numero es: " << num1 << endl; 
    cout << "El nuevo valor para el segundo numero es: " << num2 << endl; 

    return 0; 
}

void valNuevo(int& x, int& y){
    cout << "El valor para el primer numero es: " << x << endl; 
    cout << "El valor para el segundo numero es: " << y << endl; 

    //cambiamos sus valores
    x = 99999; 
    y = x +1;  
}

void valNuevo_sin_ref(int w, int z){
    cout << "El valor para el primer numero es: " << w << endl; 
    cout << "El valor para el segundo numero es: " << z << endl; 

    //cambiamos sus valores
    w = 99999; 
    z = w +1;  
}