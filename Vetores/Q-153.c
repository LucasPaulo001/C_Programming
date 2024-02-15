#include <stdio.h>
#include <conio.h>
const int quantidade = 10; //Usaremos a constante 10 para facilitar o nosso programa em uma eventual mudança na quantidade de números, em vez de modificar todo o nosso programa, apenas mudaremos o valor da constante "quantidade".

    /*Escreva um programa que leia dez números inteiros e, após finalizar a leitura, 
    imprima todos os números lidos na mesma ordem em que eles foram digitados.*/

void main(){
    int vetor[quantidade]; //O tamanho do nosso vetor nesse caso é "10"
    int k;
    printf("Informe dez numeros inteiros: \n");

    /*Lendo o vetor*/
    /*Iniciaremos nossa variável de controle "k" com "1", para que seja impresso a quantidade certa de números, do 1 até o 10*/

    /*for(k=1; k<=quantidade; k++){                           
        scanf("%d", &vetor[k]);     
    }*/

    /*Ex: valores de k(variável de controle) = 1 2 3 4 5 6 7 8 9 10*/
    /*Valores informados = 8 7 9 6 5 4 3 2 1 5*/
    /*  valores do vetor = 0 1 2 3 4 5 6 7 8 9

        *Cada valor informado será armazenado no seu respectivo lugar do vetor,que começa sempre pelo zero, se colocassemos para imprimir o valor do vetor[5], nos depararíamos com o número 4, pois foi o número informado naquele local.

    /*Note que o nosso vetor ele sempre se iniciará em 0, se colocarmos a nossa variável de controle começando com 0, o nosso resultado final será de 11 números*/

    /*Ex: k(variável de controle) = 0 1 2 3 4 5 6 7 8 9 10*/
    /*Valores informados = 8 7 9 6 5 4 3 2 1 5 2*/
    /*             vetor = 0 1 2 3 4 5 6 7 8 9*/

    /*Isso acontecerá pois no nosso comando de repetição, nós colocamos "k<=quantidade", ou seja, menor ou igual a quantidade 10, imprimirá do 0 até o 10, pois o 10 é igual a nossa quantidade(10)*/

    /*Mas por que os valores informados estão em maior quantidade do que o nosso vetor? 
    /*Valores informados = 8 7 9 6 5 4 3 2 1 5 2*/
    /*             vetor = 0 1 2 3 4 5 6 7 8 9*//*
        *Isso ocorre pois o nosso programa aloca esse último valor "2" em uma memória "desconhecida", que vai além dos limites do nosso vetor.
    */

    for(k=1; k<=quantidade; k++){                           
        scanf("%d", &vetor[k]);    //O vetor está sendo lido como o [k], porque todos os números que informarmos será armazenado em k a cada atualização do mesmo. 
    }

    /*Outra forma de imprimir sem passar da quantidade desejada seria colocando "k=0; k<quantidade", pois o 10 não será impresso porque o k vai só até números menores que 10. ex: 0 1 2 3 4 5 6 7 8 9*/

    /*Imprimindo o vetor*/

    /*Para imprimir o vetor usaremos o mesmo comando de repetição anterior, a diferença é que em vez de ler, iremos agora imprimir os valores que foram armazenados no vetor[k] no comando anterior*/

    for(k=1; k<=quantidade; k++){
        printf("%d ", vetor[k]);
    }

    getch();
}