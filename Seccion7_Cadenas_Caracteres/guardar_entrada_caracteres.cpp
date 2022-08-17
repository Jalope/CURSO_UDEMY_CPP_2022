/* La libreria que vamos a utilizar siempre que trabajemos con caracteres será: string.h. Por otro lado para guardar caracteres tenemos tres posibles opciones: 
        1) cin normal y corriente. 
        2) gets() --> Esta opción no es la mejor xq si la cadena supera la memoria que hemos reservado para ella, le dará igual usando memoria no reservada.
        3) cin.getline(<nombre_var>, <tamaño>, '\n') El último parametro es para que al presionar enter salgamos del cin. */

#include<iostream>
#include<string.h> 
#include<stdlib.h>

using namespace std; 

int main(){

    char palabra[] = "hola qué tal?"; 
    int longitud = 0;

    char palabra2[10]; 
    
    cout << "Introduce una palabra: " << endl; 
    cin.getline(palabra2, 10, '\n'); 

    longitud = strlen(palabra); //Permite saber la longitud de una cadena (devuelve un int)

    cout << palabra2 << endl;
    cout << longitud; 

    char palabra1[] = "Javier"; 
    char palabra_2[20];

    strcpy(palabra_2, palabra1); //Con esto copiamos el contenido de palabra1, en palabra2. 

    cout << palabra2; 

    char palabra3[] = "Hola";
    char palabra4[] = "Hola"; 
    //La función compara si las palabras son iguales. Cuando devuelve CERO es que son IGUALES, si no es que son diferente. 
    if (strcmp(palabra3, palabra4) == 0){
        cout << "Ambas cadanas son iguales"; 
    }
    //También sirve para ordenar lexicograficamenente. Pues por ejemplo "avión", será mayor que "barco". Así, strcmp("avión", "barco") será mayor que cero. Pués avión va antes que barco en orden lexicográfico. 
    cout << "------------------------------" << endl; 
    char palabra5[] = "avion";
    char palabra6[] = "barco"; 

    if (strcmp(palabra5, palabra6) > 0){
        cout << palabra5; 
    } else {
        cout << palabra6;
    }
    
    cout << "------------------------------" << endl;
    //Concatenar cadenas
    char cad1[] = "Esto es una cadena";
    char cad2[] = "de ejemplo"; 
    char cad3[30]; 

    strcpy(cad3, cad1); 

    strcat(cad3, cad2); // -> Vamos añadiendo todas las cadenas que queramos, pero de 1 en 1.

    cout << cad3 << endl; 

    cout << "------------------------------" << endl;
    //Inventir cadenas strrev(cad4). No disponible el linux

    cout << "------------------------------" << endl;
    //Pasar cadenas a numeros
    char cad5[] = "123";
    int cad_5; 

    cad_5 = atoi(cad5);

    cout << cad_5 << endl;

    //Si el numero tiene decimales se usa atof

    float cad_to_num; 

    char num[] = "123.4";

    cad_to_num = atof(num); 

    cout << cad_to_num << endl; 

    return 0; 
}