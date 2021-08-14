#include <stdio.h>
#include <stdlib.h>

int main(void){

    int v[100] = {1,2,3,4,5,6,7,8,9,10};
    int p[100] = {1,2,3,4,5,11,12,13,14};
    int o[100];
    int i,j;



    for( i = 0;i < 100; i++){
        for(j = 0;j < 100;j++){
            if(v[i] == p[j]){
                o[j] = v[i];
            }
        }
    }
    for(i = 0;i < 7;i++){
        printf("o[%d] = %d\n",i,o[i]);
    }

}