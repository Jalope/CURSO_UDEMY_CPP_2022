#include <iostream>
using namespace std; 

struct notas{
    int nota1; 
    int nota2; 
    int nota3;
};

struct alumno{
    char nombre; 
    struct notas nota; 
}alumnos[3];

int main(){

    for (int i = 0; i < 3; i++){
        cout << "Nombre: "; cin >> alumnos[i].nombre; 

        cout << "Nota1: "; cin >> alumnos[i].nota.nota1;
        cout << "Nota2: "; cin >> alumnos[i].nota.nota2;
        cout << "Nota3: "; cin >> alumnos[i].nota.nota3; 
    }

    double promedio; 
    int sum = 0; 

    for (int j = 0; j < 3; j++){
        sum += alumnos[j].nota.nota1; 
    }
    
    

    return 0; 
}
