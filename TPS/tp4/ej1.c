#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int M[3][4] ={
        {5, 7, 3, 9},
        {2, 3, 4, 1},
        {8, 6, 4, 2}
        };
    int suma = 0;
    for (int i=0; i<3;i++){
        for (int j=0;j<4;j++){
            suma += M[i][j];
        }
    }

    printf("%d",suma);
    return 0;
}