#include <stdio.h>
#include <stdlib.h>

int main(void){

int vet[200],i,j,aux;

for(i = 0 ; i < 200; i++){
    scanf("%d",vet[i]);
}
for (j = 200; j > 100;j--){
    aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;
}
}