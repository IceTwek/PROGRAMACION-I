// realizar FUNCION 
// input= vectores int A[n] y int B[n] donde n=par
// funcion()
// return= A[pares] + B[inpares] <----- int
// precondicion = A[], B[], sumatoria
// postcondicion = sumatoria sea A[pares] + B[inpares] y se muestre en pantalla
#include <stdio.h>
#include <stdlib.h>

//Hacer una función que reciba dos vectores A y B de números enteros de n cantidad de elementos, siendo n un número
// par, y retorne la suma de los elementos que ocupan las posiciones pares del primero con los elementos que ocupan las impares
// del segundo.  Recuerde que en C las posiciones en los arreglos se numeran desde el cero, y que el cero es un número par.



int parimpar(int A[],int B[],int n){
    int contador = 0;
    for (int i=0;i<n;i+=2){
        contador += A[i] + B[i+1];

    }
    return contador;
}



int main(void){
    typedef int vectorpar[4];
    vectorpar a = {13, 2, 1, 6};
    vectorpar b = {5, 7, 3, 9};
    
    int sumado = parimpar(a,b,4);
    printf("%i",sumado);


    return 0;
}