#include <iostream>
using namespace std; 

template <class TIPOD>
void print(TIPOD dato); 

int main(){
    int dato1 = 87; 
    float dato2 = 2.3; 
    double dato3 = 543.3212; 
    char dato4 = 'a'; 

    print(dato1);
    print(dato2);
    print(dato3);
    print(dato4);

    return 0; 
}

template <class TIPOD>
void print(TIPOD dato){
    cout << "El dato es: " << dato << endl; 
} 