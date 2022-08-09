/* Simetrica? */

#include <iostream> 

using namespace std; 

int main(){

    int m[3][3] = {8, 1, 3,
                    1, 7, 3,
                    3, 4, 9};

    bool b = true; 
    int n = 0; 
    
    while (b == true and n != 3){
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                b = (m[j][i] == m[i][j]);
            }
            n++;
        }
    }

    cout << b; 

    return 0; 
}

