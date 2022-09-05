//BUSQUEDA BINARIA 

//Necesitamos una lista ordenada de menor a mayor

#include <iostream>

using namespace std; 


/* versión recursiva, no sé como usarla en c++ ya que no devuelve dos elementos en una misma función 
int busqueda_binaria(int a[5], int x, int c, int f) {

    bool b = false; 
    int p;
    int m;  

    if (c == f){
        b, p = false, c; 
    } else if (c < f){
        m = (c + f) / 2;
        if (x < a[m]){
            b, p = busqueda_binaria(a, x, c, m); 
        } else if (x == a[m]){
            b, p = true, m; 
        } else if (x > a[m]){
            b, p = busqueda_binaria(a, x, m+1, f);
        }
    }

    return b, p; 
}
*/

int main() {

    //datos de entrada
    int a[5] = {1,2,3,4,5}; 
    int c = 0; 
    int f = 5; 
    int x = 4; // -> dato buscado


    //algoritmo
    int m;
    int c_aux;
    int f_aux; 
    bool b = false; 
    int p; 

    c_aux = c; f_aux = f; 
    m = (c_aux + f_aux) / 2;

    while((c_aux < f_aux) && (x != a[m])){ //&& en C++ es conjunción pero funciona con cortocircuito, es decir, si la primera condición es false, no comprueba la segunda
        if (x < a[m]){
            f_aux = m; 
        } else if (x > a[m]){
            c_aux = m + 1; 
        } 
        m = (c_aux + f_aux) / 2; 
    }
    
    if (c_aux == f_aux){
        b = false; 
        p = c_aux;
    } else if (x == a[m]){
        b = true; 
        p = m; 
    }
    
    cout << b << endl; // 1-> Está, 0 -> No está
    cout << p << endl; // posicion en la lista

    return 0; 
}