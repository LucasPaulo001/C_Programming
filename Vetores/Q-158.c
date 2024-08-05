#include <stdio.h>
#include <conio.h>
const int quantidade = 10;

/*158. Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a leitura, imprima todos os elementos do vetor que são maiores do que a média 
aritmética de todos os elementos do vetor.*/

void main(){
    int vetor[quantidade], k, soma=0;
    //Lendo o vetor e somando os valores
    for(k=0; k<quantidade; k++){
        scanf("%d", &vetor[k]);
        soma = soma + vetor[k];
    }
    //Calculando a media dos valores 
    float media = (float)soma/quantidade;
    printf("Media dos numeros informados: %.1f\n", media);
    printf("Numeros informados maiores que a media: ");
    //Percorrendo o vetor e comparando os valores com a sua média aritmética
    for(k=0; k<quantidade; k++){
        if(vetor[k]>media){
            printf("%d ", vetor[k]);
        }
    }
    getch();
}