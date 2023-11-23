#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void movimientos(FILE* fp){
    int n_cuenta,codi,n_cuenta_ant;
    double importe,saldo,importe_ant;
    fscanf(fp,"%d,%d,%lf", &n_cuenta,&codi,&importe);
    while (!feof(fp)){
        n_cuenta = n_cuenta_ant;
        saldo = 0;
        printf("NUMERO DE CUENTA\t\tSALDO");
        while (!feof(fp) && n_cuenta == n_cuenta_ant){
            if (codi == 1){
                saldo = saldo + importe;

            } else if(codi == 2){
                saldo = saldo - importe;
            }
            
            fscanf(fp,"%d,%d,%lf", &n_cuenta,&codi,&importe);
        }
        printf("%d\t\t%f",&n_cuenta_ant,&saldo);
    }
}
int main(void) {

    return 0;
}