#include <stdio.h>
#include <stdlib.h>


int main (void){

    float salario[50], sal,media=0,salmedio=0;
    int i,n ;
    printf("Escreva o seu salario:");
    scanf("%f",&sal);
    for(i = 0; i < 50 && sal > 0; i++ ){
        salario[i] = sal;
        media = media + sal;
        printf("Escreva o seu salario: ");
        scanf("%f",&sal);
    }
    media = media/i;
    printf("Digite o limite de salario:");
    scanf("%f",&salmedio);
    for(n = 0; n < i; n++){
        if(salario[n] <= salmedio){
            printf("O trabalhador %d recebe: %.2f\n",n,salario[n]);
        }
    }

}