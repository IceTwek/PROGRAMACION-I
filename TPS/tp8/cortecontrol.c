#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cortecontrol(FILE* fp){
    int legajo,materia,carrera,nota;
    int count,carrera_ant;
    float promedio,suma;
    fscanf(fp, "%d\t%d\t%d\t%d", &legajo,&materia,&carrera,&nota);
    while (!feof(fp)){
        suma = 0;
        count = 0;
        carrera_ant = carrera;
        while (carrera == carrera_ant && !feof(fp)){
            suma = suma + nota;
            count++;
            printf("La carrera es: %d\n", carrera);
            printf("El legajo es %d y la nota es %d\n", legajo,nota);
            fscanf(fp, "%d\t%d\t%d\t%d", &legajo,&materia,&carrera,&nota);
        }

         
    }
    promedio = suma / count;
    printf("El promedio es: %0.2f" ,promedio); 
}


int main(void) {
    FILE* fp;
    fp = fopen("datos.txt", "r");
    cortecontrol(fp);
    fclose(fp);
    return 0;
}