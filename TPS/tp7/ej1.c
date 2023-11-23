#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct 
    {
        int dia;
        int mes;
        int anio;
        float p;
    } datosLLuvia;


 void cargardatos(datosLLuvia v[],int n){
    for(int i=0; i<n; i++){
        fflush(stdin);
        printf("INGRESE EL DIA: ");
        scanf("%i", &v[i].dia);
        fflush(stdin);
        printf("INGRESE EL MES: ");
        scanf("%i", &v[i].mes);
        fflush(stdin);
        printf("INGRESE EL ANIO: ");
        scanf("%i", &v[i].anio);
        fflush(stdin);
        printf("INGRESE LAS PRECIPITACIONES: ");
        scanf("%f", &v[i].p);
 }}
void calcularPresipitaciones(datosLLuvia v[],int n,int* dialluvioso, int*diapocolluvioso, int*dianolluvioso){
    *dialluvioso = 0, *diapocolluvioso = 0, *dianolluvioso = 0;
    for (int i = 0 ; i<n ; i++){
        if (v[i].p == 0){
            (*dianolluvioso)++;

        } else if (v[i].p < 50){
            (*diapocolluvioso)++;
            
        } else {
            (*dialluvioso)++;
        }
    }
}
int main(void) {
    int n = 3; //cantidad de dias a registrar (deben de ser 30 pero uso 3 porque es mas facil de testear)
    datosLLuvia vectorDatos[n]; //creo el vector de registros de lluvia de los dias
    FILE *arch=fopen("lluvia.txt","w");
    cargardatos(vectorDatos,n); //cargo los datos al vector
    for (int i=0;i<n;i++){ //agrego los datos de cada dia (todos los datos de los campos dia,mes,etc) al archivo 
        arch=fopen("lluvia.txt","a");
        fprintf(arch,"%i %i %i %.2f\n", vectorDatos[i].dia,vectorDatos[i].mes,vectorDatos[i].anio,vectorDatos[i].p);
    
        fclose(arch);
    }
     int diaL,diaPL,diaNL; 
     calcularPresipitaciones(vectorDatos,n,&diaL,&diaPL,&diaNL);
     printf("Dias sin lluvia: %i\n",diaNL);
     printf("Dias con lluvia menor a 50mm: %i\n",diaPL);
     printf("Dias con lluvia mayor o igual a 50mm: %i",diaL);

    return 0;
}