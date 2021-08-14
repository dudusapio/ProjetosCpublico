algoritmo
    real altura,porcnpbaixo,mediahbaixo,porcmalta
    caracter sexo,prox
    inteiro npessoas,npbaixo,hbaixo,malta
inicio
        npessoas <- 0
        npbaixo <- 0
        hbaixo <- 0
        malta <- 0

        escreva "existe uma pessoa ?"
            leia prox
        enquanto prox == 's' faca

            escreva"Digite a sua altura:"
                leia altura
        
            enquanto altura < 1 ou altura > 2,3 faca
                escreva "Digite a sua altura:"
                leia altura
            fim enquanto
            escreva "Digite o seu sexo: "
            leia sexo
            enquanto  sexo != 'M' ou sexo != 'F'faca
                escreva "Digite seu sexo:"
                leia sexo
            fim enquanto
            se altura < 1,7 entao 
                npbaixo <- npbaixo + 1
            fim se
            se altura < 2 e sexo = 'M' entao
                hbaixo <- hbaixo + 1
            fim se
            se altura > 1,8 e sexo = 'F'
                malta <- malta + 1
            fim se
            npessoas <- npessoas + 1
        fimenquanto
        
        
        porcnpbaixo <-  (npbaixo/npessoas)  * 100 
        mediahbaixo <- hbaixo/npessoas 
        porcmalta <- (malta/npessoas) * 100 

        escreva" porcentagem de pessoas menores que 1,7 de altura:",porcnpbaixo
        escreva"media de homens baixos :",mediahbaixo
        escreva "porcentagem de mulheres altas : ",porcmalta
fim algoritmo


algoritmo
    real x,cos,termo,num
    inteiro n,fat 
inicio 
    leia x 
    cos x 
    fat <- 2
    n <- 2
    ant <- num/fat
    num <- x * x
    termo <- num/fat 
    enquanto |ant - termo| > 0,0001 faca
        cos <- cos - ant + termo
        n <- n +2
        fat < - fat * n * (n - 1)
        num < - num * x * x
        ant <- num/fat
        n < n + 2
        fat < - fat * n * (n - 1)
        num < - num * x * x
        termo <- num/fat 
    fim enquanto