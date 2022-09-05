#include <iostream>

using namespace std; 

struct Persona
{
    char nombre[20];
    int edad;
}
persona1 = {"Javier", 29},
persona2 = {"Sara", 25},
persona3; //Una forma de definirlo, es justo despues del struct separando por comas y poniendo el punto y como en el último

int main(){
    cout << "Nombre1: " << persona1.nombre << endl; 
    cout << "Edad1: " << persona1.edad << endl; 

    cout << "\nNombre2: " << persona2.nombre << endl; 
    cout << "Edad2: " << persona2.edad << endl;


    cout << "Nombre person3: "; 
    cin.getline(persona3.nombre, 20, '\n'); 
    cout << "Edad persona4: "; 
    cin >> persona3.edad;

    cout << "\nNombre3: " << persona3.nombre << endl; 
    cout << "Edad3: " << persona3.edad << endl; 

    return 0; 
}