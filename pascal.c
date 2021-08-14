#include <stdio.h>

int main(void){

int pascal[20][20],i,j;

    pascal[0][0] = 1;
    for( i = 1; i < 20;i++){
        pascal[i][0] = 1;
        pascal[0][i] = 0;
    }
    for(i = 1;i<20;i++){
        for(j=1;j<20;j++){
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }

    for(i = 1;i<20;i++){
        for(j=1;j<20;j++){ 
            printf("pascal[%d][%d] = %d\n",i,j,pascal[i][j]);
        }
    }
}