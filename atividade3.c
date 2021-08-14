/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
2 ∗ UNIFAL − Universidade Federal de Alfenas .
3 ∗ BACHARELADO EM CIENCIA DA COMPUTACAO.
4 ∗ Trabalho . . : Atividade 3
5 ∗ Disciplina : Programacao
6 ∗ Professor . : Luiz Eduardo da Silva
7 ∗ Aluno . . . . . : Eduardo Sapio Saccardo
8 ∗ Data . . . . . . : 02/08/2021
9 ∗−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
#include <stdio.h>
#include <stdlib.h>

//Calcula o comprimento do string
// recebe o string s
//retorna o comprimento de s
int strlenght ( char *s)
{
    int i;
    for(i = 0; s[i];i++)
        ;
    return i;
}
// le um string
//parametros : s string a ser lido
// len = tamanho maximo da leitura(contar o \0 e \n)
void strread(char *s, int len)
{
    fgets(s,len,stdin);
    s[strlenght(s) - 1] = '\0';
}
//mostra os elementos do vetor string em modo texto
// parametros : s = string
// name = nome do string

void strshow(char *s, char *name)
{
    int i;
    for(i = 0; s[i]; i++)
        printf("%3d ", i);
    printf("%3d\n",i);
    for(i = 0; s[i]; i++)
        printf("+---");
    printf("+---+\n");
    for(i = 0; s[i];i++)
        printf("| %c ", s[i]);
    printf("| \\0| %s\n", name);
    for(i = 0;s[i];i++)
        printf("+---");
    printf("+---+\n");
}

//Insere um substring num string na posicao especificada
// parametro: pos = posicao onde inserir(0 na primeira posicao)
//            sub = substring que sera inserido em s
//            s   = string onde inserir sub

void strinsert(int pos, char *sub, char *s)
{
    int i;
        for (i = strlenght(sub) + strlenght(s); i-strlenght(sub) >= pos; i--)
        {
            s[i] = s[i-strlenght(sub)];
        }
        for(int j = 0; j < strlenght(sub); j++){
            s[pos] = sub[j];
            pos++;
        }
}

//Transforma um literal em inteiro
// o literal pode ter sinal ( + ou - ) seguido de digitos

int str2int(char *s)
{
    int pos;
    pos = atoi(s);
}

int main(void)
{
    char string[100];
    char substring[100];
    char posstr[4];
    int  posicao;

    do 
    {
        strread(posstr, 4);
        posicao = str2int(posstr);
        printf("\n Posicao = %d\n", posicao);
        if (posicao >=0)
        {
            strread(substring,30);
            strshow(substring,"substr.");
            strread(string,70);
            strshow(string,"string");
            strinsert(posicao,substring,string);
            strshow(string,"result.");
        }
    } while(posicao >= 0);
}
