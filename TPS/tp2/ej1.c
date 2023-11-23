#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void cargador(int v[], int N, int mayor, int menor){
    srand(time(NULL));
    for (int i=0;i<N;i++){
        v[i] = rand() % (mayor - menor +1) + menor;
    }



}
int escalar(int a[],int b[],int n){
    int sumador = 0;
    for (int i=0;i<n;i++){
        sumador += (a[i] * b[i]);
    }
    return sumador;
}


int main(){
int N = 5; 
int A[N];
int B[N];   
int menor = 1; 
int mayor = 10;
cargador(A,N,mayor,menor);
cargador(B,N,mayor,menor);
printf("%d\n",escalar(A,B,N));                         
for (int i=0;i<N;i++){
    printf("%d",A[i]);
}
printf("\n");
for (int i=0;i<N;i++){
    printf("%d",B[i]);
}


}