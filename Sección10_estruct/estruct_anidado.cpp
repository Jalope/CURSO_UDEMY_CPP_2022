#include <iostream>
using namespace std; 

/*                             Empleado
-----------------------------------------------------------------------
nombre |         dir_empleado           | sueldo
-----------------------------------------------------------------------    
       |dirección | ciudad  | provincia |
*/

//Para generar el estruct empleado usamos la anidación de estruct

struct info_direccion
{
    char direccion[30]; 
    char ciudad[20]; 
    char provincia[20];
};

struct empleado
{
    char nombre [20]; 
    struct info_direccion dir_empleado;
    double sueldo; 
}emp1 = {"Javier", {"SMV", "Sevilla", "Andalucia"}, 2130}, empleados[2];


int main(){

    cout << "Nombre: " << emp1.nombre << endl;
    cout << "Provincia: " << emp1.dir_empleado.provincia << endl;

    for (int i = 0; i < 2; i++)
    {
        fflush(stdin); //deja vacio el buffer
        cout << "\nDATOS EMPLEADO" << i << endl; 
        cout << "Nombre: "; 
        cin.getline(empleados[i].nombre, 20, '\n');
        cout << "Direccion: " << endl;
        cout << "Calle: ";  
        cin.getline(empleados[i].dir_empleado.ciudad, 30, '\n'); 
        cout << "Ciudad: ";
        cin.getline(empleados[i].dir_empleado.ciudad, 20, '\n'); 
        cout << "Provincia: "; 
        cin.getline(empleados[i].dir_empleado.provincia, 20, '\n');
        cout << "Sueldo: "; 
        cin >> empleados[i].sueldo;  
    }

    for (int i = 0; i < 2; i++)
    {
        cout << "\nDATOS EMPLEADO" << i << endl; 
        cout << "Nombre: " << empleados[i].nombre << endl;
        cout << "Direccion: " << endl;
        cout << "Calle: " << empleados[i].dir_empleado.ciudad << endl;  
        cout << "Ciudad: " << empleados[i].dir_empleado.ciudad << endl; 
        cout << "Provincia: " << empleados[i].dir_empleado.provincia << endl;
        cout << "Sueldo: " << empleados[i].sueldo;  
    }
    


    return 0; 
}
