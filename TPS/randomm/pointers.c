#include <stdio.h>
#include <stdlib.h>









int main(){
    int i = 10;
    int* I;
    I = &i;
    printf("%p %p %p %lu\n", &i,I,I+1,sizeof(i));


    char c = 10;
    char* C;
    C = &(c);
    printf("%p %p %p %lu\n", &c,C,C+1,sizeof(C));



    int j = 11;
    int* p = &j;
    printf("%i %i %p %p\n", j,*p,&p,&j);
    return 0;
}