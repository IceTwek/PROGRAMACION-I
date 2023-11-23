// Dado un arreglo de N elementos, escribir un programa que permita desplazar los elementos del arreglo una posición
// a la derecha, de tal forma que el primero pase a la segunda posición, el segundo a la tercera y así sucesivamente.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




//prerequisito: char Array[n]
//void funcion: desplazar elementos derecha
// como hago esto?
// utilizando los indices, creo un bucle el cual nos permita asignarle el valor actual a la siguiente poscion, pero intentando antes de hacerlo, guardarlo en una variable para aplicarlo luego, porque sino se nos llena la array de un mismo numero.


//postrequisito: array desplazada y print

void desplazar (char v[],int n){
    char temp = v[n-1];
    for (int i=n-1;i>0;i--){
        v[i] = v[i-1];

    }
    v[0] = temp;
}



int main(void) {
    char v[] = "cono";
    int n = strlen(v);
    desplazar(v,n);
    for (int i = 0;i<n;i++){
        printf("%c", v[i]);
    }
    return 0;
}