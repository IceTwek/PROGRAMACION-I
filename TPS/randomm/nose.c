#include <stdio.h>
#include <stdlib.h>



int main() {
    int v[4] = [10, 8 , 10 ,2];
    int v2[4] = v;
    for (int i=0;i<4;i++){
        printf("%d", v2[i]);
    }
    return 0;
}