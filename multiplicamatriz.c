#include <stdio.h>

int main(void){

    int matA[100][100], matB[100][100],matC[100][100],i,j,k,m,n,p;

    printf("Digite os valores de m n p:");
    scanf("%d %d %d",&m,&n,&p);
    while(m < 1 || m > 100 || n < 1 || n > 100 || p < 1 || p >100){
        printf("Digite os valores de m n p:");
        scanf("%d %d %d",&m,&n,&p);
    }
    for(i = 0;i<m;i++){
        for(j=0;j<n;j++){ 
            scanf("%d",matA[i][j]);
        }
    }
    for(i = 0;i<n;i++){
        for(j=0;j<p;j++){ 
            scanf("%d",matB[i][j]);
        }
    }
    for(i = 0; i < n ; i++){
        for(j = 0;j < p; j ++){
            matC[i][j] = 0;
            for(k = 0; k < n; k ++){
                matC[i][j] = matC[i][j] + matA[i][k] * matB[k][j];
            }
        }
    }
    for(i = 0;i<m;i++){
        for(j=0;j<p;j++){ 
            printf("MatC[%d][%d] = %d"i,j,matC[i][j]);
        }
    }

}