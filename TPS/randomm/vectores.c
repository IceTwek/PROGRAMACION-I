#include <stdio.h>
#include <stdlib.h>
int vectoreano[4];

void menu(){
    system("cls");
    printf("\t\t Menu principal\n");
    printf("\t\t 1 Ingresar numeros\n");
    printf("\t\t 2 Mostrar numeros\n");
    printf("\t\t\t 0 Salir\n");
}

void cargar(int v[], int tam){
    for (int i = 1; i<tam; i++){
        printf("digame el valor %i : ", i+1);
        scanf("%d",&v[i]);
    }
}




int main(){
    int numeros[10];
    int salir = 1, eleccion;
    
    while (salir!=0){
        menu();
        printf("Eliga una opcion: ");
        scanf("%d",&eleccion);
        switch (eleccion)
        {
        case 1:
            cargar(numeros,10);
            break;
        case 2:
            for (int i = 1; i<5;i++){
                printf("%d", vectoreano[i]);
            }

            
            break;
        case 3:
            salir = 0;break;
        
        default:
            printf("Mala eleccion!");
            break;
        }

    }
    return 0;
}