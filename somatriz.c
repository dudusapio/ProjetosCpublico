#include <stdio.h>                                                              // i  j
                                                                                //[0][0] [0][1] [0][2]
int main(void){                                                                 //[1][0] [1][1] [1][2]
                                                                                //[2][0] [2][1] [2][2]
    int i=0,j=0,somal=0,somac=0;
    int A[3][3] = {1,2,3,                                                        // [0][0] com [1][0] com [2][0]
                   4,5,6,                                                        // [0][1] com [1][1] com [2][1]
                   7,8,9};                                                       // [0][2] com [1][2] com [2][2]
    int k = 0;
    for(i = 0; i < 3; i++){
         k = 0;
        somac = somac + A[i][k];    
        k++;
        for(j = 0; j < 3; j++){
         somal = somal + A[i][j];
        }
        printf("A soma da linha [%d] = %d\n",i,somal);
        somal = 0;
        
    }
    printf("soma coluna 0 = %d\n",somac);
    do{
        somac = 0;
        for(i = 0; i < 3; i++){
            somac = somac + A[i][k]; 
        }
        printf("soma coluna %d = %d\n",k,somac);
        k++;
    } while(k < 3);
}