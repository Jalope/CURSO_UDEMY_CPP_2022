#include <iostream>

using namespace std; 

struct empleado{
    char nombre[20]; 
    int sueldo; 
}empleados[3];

int main(){

    int mayor = 0; 
    int menor = 99999; 

    int pos_may; 
    int pos_menor;

    for (int i = 0; i < 3; i++){
        fflush(stdin);
        
        cout << "\nNombre: "; 
        cin >> empleados[i].nombre; 
        
        fflush(stdin);
        cout << "Sueldo: "; 
        cin >> empleados[i].sueldo; 

        if(empleados[i].sueldo > mayor){
            mayor = empleados[i].sueldo;
            pos_may = i; 
        }
        
        if(empleados[i].sueldo < menor){
            menor = empleados[i].sueldo; 
            pos_menor = i;
        }

    }

    cout << "El empleado con mejor sueldo es: " << empleados[pos_may].nombre << endl;
    cout << "El empleado con peor sueldo es: " << empleados[pos_menor].nombre << endl; 

    

    return 0; 
}
