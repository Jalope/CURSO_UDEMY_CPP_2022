#include <iostream>

using namespace std; 


void intercambiar(int&, int&); 

int main(){
    int num1 = 10, num2 = 11; 

    cout << num1 << ", " << num2 << endl; 

    intercambiar(num1, num2); 

    cout << num1 << ", " << num2 << endl; 

    return 0; 
}

void intercambiar(int& x, int& y){
    int aux; 
    aux = x;
    x = y; 
    y = aux; 

}