#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[40];
    int edad;
    char sexo;
    char ec;
    float sb;
} empleados;
void cargar_datos_alumnos(empleados* emp) {
    printf("Ingrese el nombre del empleado: ");
    fflush(stdin);
    fgets(emp->nombre, sizeof(emp->nombre), stdin);
    emp->nombre[strcspn(emp->nombre, "\n")] = '\0'; // Elimina el carácter de nueva línea emp final

    printf("Ingrese la edad del empleado:  ");
    fflush(stdin);
    scanf("%d", &emp->edad); 


    printf("Ingrese el sexo del empleado(M o F): ");
    fflush(stdin);
    scanf(" %c", &emp->sexo);

    printf("Ingrese el estado civil del empleado(S(soltero, C(casado), D(divorciado)): ");
    fflush(stdin);
    scanf(" %c", &emp->ec);

    printf("Ingrese el salario base del empleado: ");
    fflush(stdin);
    scanf("%f", &emp->sb);
}
void calcular_datos(int n, empleados vector_empleados[n], empleados* trabajador_joven, int* cant_casadas, int* cant_hombres, float* sts ){
    *trabajador_joven = vector_empleados[0];
    *sts = vector_empleados[0].sb;
    *cant_casadas = 0;
    *cant_hombres = 0;
    
    for (int i = 1; i<n;i++){
        if (vector_empleados[i].edad < trabajador_joven->edad){
            *trabajador_joven = vector_empleados[i];
        } 
        *sts += vector_empleados[i].sb;  
    }
    for (int j = 0; j < n;j++){
        if (vector_empleados[j].ec == 'C' && vector_empleados[j].sexo == 'F'){
            (*cant_casadas)++;
        }
        if (vector_empleados[j].sexo == 'M'){
            (*cant_hombres)++;
        }

    }
    

}
void mostrar(empleados* empleado){
    printf("%s", empleado->nombre);
    printf("%d\n", empleado->edad);
    printf("%c\n", empleado->sexo);
    printf("%c\n", empleado->ec);
    printf("%f\n\n", empleado->sb);

}
int main(void) {
    int n = 3;
    empleados vector[n];
    empleados trabajador_joven;
    int cant_casadas, cant_hombres;
    float sts;
    for (int i=0 ;i<n;i++){
        printf("\nDatos para el empleado %d:\n", i + 1);
        cargar_datos_alumnos(&vector[i]);
    }
    calcular_datos(n, vector, &trabajador_joven, &cant_casadas, &cant_hombres, &sts);

    for (int i=0 ;i<n;i++){
        mostrar(&vector[i]);
    }

    printf("El empleado mas joven es: %s\n", trabajador_joven.nombre);
    printf("Cantidad de casadas: %d\n", cant_casadas);
    printf("Cantidad de hombres: %d\n", cant_hombres);
    printf("Suma total salario: %.2f", sts);
    return 0;
}