//Crear una función que cargue un vector de 30 elementos con la letra “x" y coloque en una ubicación aleatoria una “A” 
//y en otra ubicación aleatoria que no sea la misma que tiene la letra “A” una letra “B”

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatorio(char v[],int n){

    int random1 = rand() % n;
    int random2;
    v[random1] = 'A';
    do {
        random2 = rand() % n;
    } while (random1 == random2);
    v[random2] = 'B';


}
int main(void) {
    srand(time(NULL));
    char v[30];
    int cantidad = 30;
    for (int i = 0 ; i<cantidad;i++){ // cargo "x" en la array v[] 30 veces
        v[i] = 'x';
    }
    aleatorio(v,cantidad);
    for (int i = 0 ; i<cantidad;i++){
        printf("%c", v[i]);
    }

    return 0;
}