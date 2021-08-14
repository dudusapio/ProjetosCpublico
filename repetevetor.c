#include <stdio.h>
#include <stdlib.h>

int main(void){

    int v[100];
    int p[100];
    int i = 0,j,n;
    int conta;
    scanf("%d",&n);

    while( i < n ){
        scanf("%d",&v[i]);
        i++;
    }
    j = 0;
    for( i = 0; i < n - 1;i++){
        if(v[i] != v[i + 1]){
            p[j] = v[i];
            j++;
        }
    }
    p[j] = v[i];
    conta = j;

    for(j = 0;j <=conta ; j ++){
    printf("p[%d] = %d\n", j, p[j]);
    }

}