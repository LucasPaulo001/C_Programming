#include <stdio.h>
#include <conio.h>
const int quantidade = 10;

/*Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a 
leitura, leia um número inteiro N e imprima todas as posições em que o número N 
aparece dentro do vetor.*/

void main(){
    int vetor[quantidade], k, num, cont=0;
    for(k=0; k<quantidade; k++){
        printf("Informe dez numeros inteiros: ");//1 5 4 7 5
        scanf("%d", &vetor[k]);
    }
    printf("Informe um numero inteiro: ");//5
    scanf("%d", &num);
    for(k=0; k<quantidade; k++){
        if(vetor[k]==num){
            printf("Posicao: %d \n", k);
        }
    }
    getch();
}