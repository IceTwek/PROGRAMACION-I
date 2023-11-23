// realizar una funcion que elimine un elemento de un vector


//void eliminar(int vector, int posicion, int *elementos_utilizados, int tamaño total)
//precondicion: que la posicion sea valida, que el vector no este vacio.
//postcondicion: que el vector[posicion] = vector[posicion + 1] para todos los v[i] a partir de [p;elemetos_utilizados]: vector[i] = vector [i-1]

#include <stdio.h>
#include <stdlib.h>

void mostrar(int v[], int n){
    for (int i=0;i<n;i++){
        printf("%i",v[i]);
    }

}
void eliminar(int v[],int p, int *eu, int tt){
    if (p<*eu && *eu<=tt && *eu != 0){
        for (int i = p;i<*eu;i++){
            v[i] = v[i+1];
        }
        (*eu)--;


    } else {
        printf("Datos invalidos");
    }

}

int main(void) {
    int vector[10] = {10,9,8,7,6,5};
    int p, eu, tt;
    p = 2;
    eu = 6;
    tt = 10;
    eliminar(vector,p,&eu,tt);
    mostrar(vector,eu);
    return 0;
}