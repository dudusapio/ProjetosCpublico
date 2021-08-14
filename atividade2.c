/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
2 ∗ UNIFAL − Universidade Federal de Alfenas .
3 ∗ BACHARELADO EM CIENCIA DA COMPUTACAO.
4 ∗ Trabalho . . : Atividade 2
5 ∗ Disciplina : Programacao
6 ∗ Professor . : Luiz Eduardo da Silva
7 ∗ Aluno . . . . . : Eduardo Sapio Saccardo
8 ∗ Data . . . . . . : 30/07/2021
9 ∗−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
#include <stdio.h>
#include<stdlib.h>

int main(void){

int piso[20][20];
int i,j, posI=0,posJ=0,qnt=0,sentido =0;
char k;
char caneta = 'u';

for(i = 0; i < 20; i++){
    for(j = 0; j < 20; j++){
        piso[i][j] = 0;
    }
}
do{
    scanf("%c",&k);
    if(k == 'w'){
        scanf("%d",&qnt);
        switch(sentido) {
            case 0:
            // andando para direita
            for(i = posI; i < posI + qnt;i++){ // nao roda nenhuma vez
                for(j = posJ; j < posJ + qnt; j++){
                    if(caneta =='u'){
                        piso[posI][posJ + (qnt - 1)] = 0; // essa linha escreve o 1 apenas nessa posicao 
                        
                    }
                    else {                    
                        piso[posI][j] = 1; // essa linha e a de baixo escreve em todas as posicoes
                        
                    }
                }
            }
            posJ += qnt;
            printf("posI=%d\nJ=%d\n",posI,j);
            printf("Linha atual:%d\nColuna atual:%d\n",posI,posJ);
            break;
            case 1:
            // andando para baixo
            for(i = posI; i < posI + qnt ;i++){
                for(j = posJ; j == posJ ; j++){
                    if(caneta =='u'){
                        piso[posI + (qnt-1)][posJ-1] = 0;  // essa linha escreve o 1 apenas nessa posicao  
                    }
                    else {
                      piso[i][posJ-1] = 1; // essa linha e a de baixo escreve em todas as posicoes
                    }  
                }
            }
            posI += qnt;
            printf("Linha atual:%d\nColuna atual:%d\n",posI,posJ);
            break;
            case 2:
            // andar para esquerda
            for( i = posI; i == posI;i++){
                for(j = posJ; j >  posJ - qnt; j--){
                    if(caneta =='u'){
                        piso[posI-1][posJ - qnt]= 1;
                        
                    }
                    else {
                        piso[posI-1][j - 1] = 1;
                    }
                }
            }
            posJ -= qnt;
            printf("Linha atual:%d\nColuna atual:%d\n",posI,posJ);
            break;
            case 3:
            // andar pra cima
            for( i = posI;i > posI - qnt; i--){
                for(j = posJ; j == posJ; j++){
                    if(caneta =='u'){
                        piso[posI - qnt][posJ] = 0;
                    }
                    else{
                        piso[i - 1][posJ] = 1;
                    }
                }
            }
            posI -= qnt;
            printf("Linha atual:%d\nColuna atual:%d\n",posI,posJ);
            break;
        }
    }
    else if (k == 'r'){
            sentido++;
            if(sentido > 3){
                sentido = 0;
            }
    } 
    else if ( k =='l'){
            sentido--;
            if(sentido < 0){
                sentido = 3;
            }
    }
    else if ( k =='u'){
        caneta = 'u';
    }
    else if (k =='d'){
        caneta = 'd';
    }
    else if ( k =='p'){
            for(i = 0; i < 20; i++){
                for(j = 0; j < 20; j++){
                    if(piso[i][j] == 0)
                    printf(".  ");
                    else
                    printf("+  ");
                }
            printf("\n");
            }
    }
} while( k != 'e');
}