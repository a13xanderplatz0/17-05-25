#include <iostream>


int main(){
int ***A=new int**[3];
for(int i=0;i<3;i++){
    A[i]=new int*[2];
    for(int j=0;j<2;j++){
        A[i][j]=new int[3];
    }
}
// Liberando memoria
for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        delete[] A[i][j];  // Liberamos el array de 3 enteros
    }
    delete[] A[i];  // Liberamos el array de 2 punteros
}
delete[] A;  // Liberamos el array de 3 punteros
return 0;
}   