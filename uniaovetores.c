#include <stdio.h>
#include <stdlib.h>

int main(void){

    int v[100] = {1,2,3,4,5,6,7};
    int p[100] = {8,9,10,11,12,13};
    int k[100];
    int i;
    int j;

    for(i = 0; i < 100; i++){
        k[i] = v[i];
    } 
    for(j = 0; j < 100; j ++){
        k[j + 7] = p[j];
    }
    for(i = 0; i < 20; i++){
        printf("k[%d] = %d\n",i,k[i]);
    }
}