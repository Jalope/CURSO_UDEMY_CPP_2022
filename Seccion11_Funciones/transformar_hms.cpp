#include <iostream>

using namespace std; 

void tiempo(int, int&, int&, int&);

int main(){
    int totalSegundos, horas, minutos, segundos; 

    cout << "Introduce una cantidad en segundos: " << endl; 
    cin >> totalSegundos; 


    tiempo(totalSegundos, horas, minutos, segundos); 

    cout << "Los " << totalSegundos << " equivalen a: " << horas << " horas, " << minutos << " minutos, " << segundos << " segundos."<< endl;

    return 0; 
}

void tiempo(int totalSegundos, int& horas, int& minutos, int& segundos){
    horas = totalSegundos / 3600; 
    totalSegundos = totalSegundos % 3600;  //segundos
    minutos = totalSegundos / 60; 
    segundos = totalSegundos % 60; 
}