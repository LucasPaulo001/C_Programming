#include <stdio.h>
#include <conio.h>
const int quantidade = 5;

/*Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a 
leitura, leia um número inteiro N e imprima todas as posições em que o número N 
aparece dentro do vetor.*/

void main(){
    int vetor[quantidade], k, num, cont=0;
    printf("Informe dez numeros inteiros: ");
    for(k=0; k<quantidade; k++){
        scanf("%d", &vetor[k]);
    }
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    for(k=0; k<quantidade; k++){
        if(vetor[k]==num){
            cont++;
        }
    }
    printf("O numero %d apareceu %d vezes no vetor ", num, cont);

    getch();
    
}