/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
2 ∗ UNIFAL − Universidade Federal de Alfenas .
3 ∗ BACHARELADO EM CIENCIA DA COMPUTACAO.
4 ∗ Trabalho . . : Atividade1
5 ∗ Disciplina : Programacao
6 ∗ Professor . : Luiz Eduardo da Silva
7 ∗ Aluno . . . . . : Eduardo Sapio Saccardo
8 ∗ Data . . . . . . : 29/06/2021
9 ∗−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
#include <stdio.h>
#include <stdlib.h>

int main(void){

int id = 0, idade = 0, somaidades = 0, npessoas = 0, qntM = 0, qntF= 0,qntO = 0, maioridade = -100, menoridade = 100, idVelho=0, idNovo=0;
char sexo;
float mediaidades=0;

    
    do {
    scanf("%d %c %d", &id, &sexo,&idade);
    somaidades = somaidades + idade;
    npessoas++;
    
    if(sexo == 'M' || sexo == 'm'){
        qntM++;
    }
    else if (sexo == 'F' || sexo =='f'){
        qntF++;
        }
    else if(sexo =='o' || sexo =='O'){
        qntO++;
        }
    if(idade > maioridade){
        maioridade = idade;
        idVelho = id;
    }   
    if(idade <= menoridade && idade != 0){
        menoridade = idade;
        idNovo = id;
    } 
    } while (id != 0 && sexo != 'x' && idade != 0); 
    
    npessoas = npessoas -1;      
    mediaidades =(float) somaidades/npessoas;
    printf("Relatorio\n");
    printf("+------------------+---------+\n");
    printf("| Soma das idades  |%9d|\n", somaidades);
    printf("| Total de pessoas |%9d|\n", npessoas);
    printf("| Media de idades  |%9.1f|\n", mediaidades);
    printf("| Homens           |%9d|\n", qntM);
    printf("| Mulheres         |%9d|\n", qntF);
    printf("| Outros           |%9d|\n", qntO);
    printf("| Maior idade      |%9d|\n", maioridade);
    printf("| ID do mais velho |%9d|\n", idVelho);
    printf("| Menor idade      |%9d|\n", menoridade);
    printf("| ID do mais novo  |%9d|\n", idNovo);
    printf("+------------------+---------+\n");
}