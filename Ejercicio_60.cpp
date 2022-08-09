#include <iostream>

using namespace std; 

void mostrar(int v[], int len);

int main(){

    int v[] = {1,2,3,4,5,6,7}; 
    int n = 0; 

    while (n != 7)
    {
        v[n] = v[n] * 2; 
        n++; 
    }
    
    mostrar(v, 7);

    return 0; 
}

void mostrar(int v[], int len){
    cout << "["; 
    for (int i = 0; i < len; i++){
        if (i < 6){
            cout << v[i] << ", ";
        }
        else cout << v[i];
         
    }
    cout << "]" << endl;
}