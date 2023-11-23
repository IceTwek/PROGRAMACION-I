#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
    srand(time(NULL));
    int matri[3][3];
    cargar_datos(matri);
    return 0;
}


void cargar_datos(int datos[3][3]){
    int i,j;
    for (i=0;i<3;i++){
        switch(i){
            case 0:
                for (j=0;j<3;j++){
                    datos[i][j] = rand() % 2 + 1;
                }
            break;
            case 1:
                for (j=0;j<3;j++){
                    datos[i][j] = rand() % 3 + 1;
                }
            break;
            case 2:
                for (j=0;j<3;j++){
                    datos[i][j] = rand() % 70 + 1;
                }
            break;
            default:
            break;
        }
        }
        for(int f= 0;f<3;f++){
            printf("\n");
            for (int g=0;g<3;g++){
                printf("%d \t",datos[f][g]);
            }
        }
    }
