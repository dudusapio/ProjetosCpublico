#include <stdio.h>

int main (void){

// 3x2 ela vira 2x3

int A[3][2] = {1,5,
               7,3, 
               8,2};
int B[2][3];
int i,j;

for(i = 0;i < 3; i++){
    for(j = 0; j< 3;j++){
       B[i][j] = A[j][i];
    }
}

for(i = 0;i < 3; i++){
    for(j = 0; j< 2;j++){
        printf("B[%d][%d] = %d\n ",j,i,B[j][i]);
    }
}

}