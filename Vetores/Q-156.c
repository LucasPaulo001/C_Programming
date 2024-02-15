#include <stdio.h>
#include <conio.h>
const int quantidade = 10;

/*Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a 
leitura, leia um número inteiro N e imprima todos os elementos do vetor que são 
maiores que N.*/

void main(){
    int vetor[quantidade], k, num;
    printf("Informe dez numeros inteiros: \n");
    for(k=0; k<quantidade; k++){
        scanf("%d", &vetor[k]);
    }
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    for(k=0; k<quantidade; k++){
        if(vetor[k]>num){
            printf("%d ", vetor[k]);
        }
    }
    getch();
}