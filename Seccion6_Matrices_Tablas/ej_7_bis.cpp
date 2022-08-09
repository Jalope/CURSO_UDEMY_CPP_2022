#include <iostream>

using namespace std; 

int main(){

     int m[3][3] = {8, 1, 3,
                    1, 7, 3,
                    3, 4, 9};

    int i = 0, j;
    bool b = true; 
    
    while (i < 3 and b){
        j = i + 1; 
        while (j < 3 and b){
            b = (m[i][j] == m[j][i]);
            j += 1; 
        }
        i += 1; 
    }
     
    cout << b; 
    
    return 0; 
}