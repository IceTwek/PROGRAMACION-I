#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void informe (FILE* fp){
    int sucursal, empleado,sucursal_ant;
    float sueldo,suma;
    rewind(fp);
    fscanf(fp,"%d,%d,%f", &sucursal,&empleado,&sueldo);
    while (!feof(fp)){
        suma = 0;
        sucursal_ant = sucursal;
        printf("\nINFORME SUCURSAL: %d\n", sucursal);
        printf("CODIGO EMPLEADO\t\tSUELDO\n");    
        while (!feof(fp) && sucursal_ant == sucursal){
            
            printf("%d\t\t%0.2f\n",empleado,sueldo);
            suma += sueldo;
            fscanf(fp,"%d,%d,%f", &sucursal,&empleado,&sueldo);
        }
    printf("TOTAL SUELDOS: %0.2f\n", suma);
    }
}
int main(void) {
    FILE* fp;
    fp = fopen("sueldos.txt", "r");
    informe(fp);
    fclose(fp);

    return 0;
}