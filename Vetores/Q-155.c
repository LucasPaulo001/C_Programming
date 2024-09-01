#include <stdio.h>
#include <conio.h>
const int quantidade = 10;

/*Escreva um programa que leia dez números inteiros e, após finalizar a leitura, leia um número inteiro N (entre 1 e 10) e imprima qual foi o enésimo número digitado pelo 
usuário. */

void main(){
    int vetor[quantidade], k, num;
    printf("Informe dez numeros inteiros: ");
    for(k=0; k<quantidade; k++){
        scanf("%d", &vetor[k]);
    }
    printf("Informe um numero inteiro entre 1 e 10: \n");
    scanf("%d", &num);
    for(k=0; k<quantidade; k++){
        if(vetor[k]==num){
            printf("%d", vetor[num-1]);
        }
    }
    getch();
}