#include<iostream>
#include<string.h>

using namespace std; 

int main(){

    char palabra[] = "hola mi nombre es Javier"; 
    int n = 0; 
    int a = 0; 
    int e = 0;  
    int i = 0; 
    int o = 0; 
    int u = 0;

    for (int j = 0; j < strlen(palabra); j++){
        //cout << palabra[j] << endl; 
        if (palabra[j] == 'a'){
            a += 1; 
        } else if (palabra[j] == 'e'){
            e += 1; 
        } else if (palabra[j] == 'i'){
            i += 1;
        } else if (palabra[j] == 'o'){
            o += 1;
        } else if (palabra[j] == 'u'){
            u += 1;
        }
    }

    cout << "La cadena tiene: " << endl; 
    cout << a << " apariciones de la volcal a." << endl;
    cout << e << " apariciones de la volcal e." << endl;
    cout << i << " apariciones de la volcal i." << endl;
    cout << o << " apariciones de la volcal o." << endl;
    cout << u << " apariciones de la volcal u." << endl; 

    return 0; 
}