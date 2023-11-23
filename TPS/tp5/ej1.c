#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

typedef struct{
    int legajo;
    char nombre[20];
    char apellido[20];
    float c1;
    float c2;
    float c3;

} alumno;

void cargar_datos_alumnos(alumno* al) {
    printf("Ingrese el nombre del alumno: ");
    fflush(stdin);
    fgets(al->nombre, sizeof(al->nombre), stdin);
    al->nombre[strcspn(al->nombre, "\n")] = '\0'; // Elimina el carácter de nueva línea al final

    printf("Ingrese el apellido del alumno: ");
    fflush(stdin);
    fgets(al->apellido, sizeof(al->apellido), stdin);
    (*al).nombre[strcspn(al->apellido, "\n")] = '\0'; // Elimina el carácter de nueva línea al final

    printf("Ingrese la c1 del alumno: ");
    fflush(stdin);
    scanf("%f", &al->c1);

    printf("Ingrese la c2 del alumno: ");
    fflush(stdin);
    scanf("%f", &al->c2);

    printf("Ingrese la c3 del alumno: ");
    fflush(stdin);
    scanf("%f", &al->c3);

    int legaj = (rand() % 100 + 1) * 100;
    al->legajo = legaj;   
}
void mostrar_datos_promedio(alumno vector[10]) {
    for (int i = 0; i < 10; i++) {
        printf("Legajo: %d\n", vector[i].legajo);
        printf("Nombre: %s %s", vector[i].nombre, vector[i].apellido);

        float promedio = (vector[i].c1 + vector[i].c2 + vector[i].c3) / 3;
        printf("Promedio: %.2f\n", promedio);

        if (promedio >= 7) {
            printf("Condicion: PROMOVIDO\n\n");
        } else if (promedio >= 4) {
            printf("Condicion: REGULAR\n\n");
        } else {
            printf("Condicion: LIBRE\n\n");
        }
    }
}
int main(void){
    srand(time(NULL));
    alumno vector[10];
    for (int i=0 ;i<10;i++){
        printf("\nDatos para el alumno %d:\n", i + 1);
        cargar_datos_alumnos(&vector[i]);
    }
    printf("\nDatos de los alumnos:\n");
    mostrar_datos_promedio(vector);
    return 0;
}
