/* *Corte de control*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Crea el archivo vacio
void crear(char nom_arch[],char modo[]){
    FILE *arch;
    arch=fopen(nom_arch,modo);
    fclose(arch);
}
void carga_alumnos(char nom_arch[],char modo[]){
    FILE *arch;
    arch=fopen(nom_arch,modo);
    int cod, lega, mat;
    float nota;
    cod=0;
    printf("\n\n\tCARGA alumnos - Ingrese el Legajo del alumno (0 Salir): ");
    scanf("%i",&lega);
while (lega!=0){
        printf("\t\t\t Ingrese el Código de materia: ");
        scanf("%i",&mat);
        printf("\t\t\t Ingrese Nota: ");
        scanf("%f",&nota);
        fprintf(arch, "%i-%i-%f\n",lega,mat,nota);
        printf("%i,%i,%f\n",lega,mat,nota);
        system("cls");
        printf("\n\n\tCARGA alumnos - Ingrese el Legajo del alumno (0 Salir): ");
        scanf("%i",&lega);
    }
    fclose(arch);
}
void corte (char nom_arch1[]) {
    int  cod, lega, mat, lega_ant;
    int  conta, total;
    float suma,nota,  promedio;
    char relleno[30];
    FILE *arch;
    arch=fopen(nom_arch1,"r");
    total=0;
    rewind(arch);
    printf("\n\t  Legajo        Código materia    Nota  ");
    fscanf(arch, "%i-%i-%f", &lega, &mat, &nota);
    while (!feof(arch) ) {
            lega_ant=lega;
            suma=0.0;
            conta=0;
            while (!feof(arch)  && (lega==lega_ant)) {
                printf("\n \t\t%i\t\t%i\t\t%3.2f", lega,mat,nota);
                suma=suma +nota;
                conta++;
                fscanf(arch, "%i-%i-%f", &lega, &mat, &nota);
            }
            promedio=suma/conta;
            strcpy(relleno,"Promedio:");
            printf("\n \t\t\t%s\t%3.2f\n", relleno ,promedio);
            total++;    }
strcpy(relleno,"Total de alumnos:");
printf("\n  \t%s\t%i\n", relleno ,total);
}
int main(){
    char falumnos[]="alumnos.txt";
    char modow[]="w", modor[]="r";
    int i;
    crear(falumnos, modow);
    carga_alumnos(falumnos, modow);

    corte(falumnos);
    system("Pause");

}

