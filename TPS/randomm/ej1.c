// Crear una función que reciba dos números enteros como parámetros, realice la suma aritmética de ambos,
// y retorne el resultado de la suma.
// realizar lo mismo con la resta y producto.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int suma(int n1,int n2){
    return n1 + n2; 
    
}
int resta(int n1,int n2){
    return n1 - n2; 
    
}
int producto(int n1,int n2){
    return n1 * n2; 
    
}


// Crear una función, que reciba dos números enteros como parámetros, calcule el resultado de la suma, 
// el de la resta y el del producto, y ponga dichos cálculos en argumentos de entrada-salida pasados a la función. 
// La función deberá llamar para hacer sus cálculos a las funciones desarrolladas en los 3 ítems anteriores. 
// En caso de finalización exitosa, la función deberá retornar cero.

 
// ESPECIFICACION:
// funcion CALCULADORA
// input: int a y int b
// output: 0

// precondicion: Funciones suma, resta y producto.
// postcondicion: que los resultados de las operaciones se les sean asignados a los parametros de la misma funcion (?)

// pseudocodigo:
// llamar suma(a,b) ---> *S
// llamar resta(a,b) ---> *R
// llamar producto(a,b) --> *P

// validar si salio bien:
// si calculadora(a,b,*s,*r,*p) == 0;
//  printf("PASO!\n")




//estructurado

int calculadora(int a, int b, int *S, int *R, int *P){ //<--- los pointers o punteros son donde se almacenaran las salidas. Son variables que se pueden modificar dentro de la funcion
    *S = suma(a,b);
    *R = resta(a,b);
    *P = producto(a,b);
    return 0;
}

int main(){
    int n1 = 10;
    int n2 = 15;
    int s,r,p;
    int sum = suma(n1,n2);
    int rest = resta(n1,n2);
    int product = producto(n1,n2);
    printf("%d, %d, %d\n",sum,rest,product);
    if (calculadora(n1,n2,&s,&r,&p) == 0){
        printf("PASO!");
    }

    return 0;
}