#include <stdio.h>
#include <conio.h>
const int quantidade = 10;

/*160. Escreva um programa que leia um vetor de 10 números inteiros e inverta todos os elementos do vetor. O programa deve ser resolvido com a utilização de apenas um 
vetor.*/

void main(){
    int vetor1[quantidade], k;
    for(k=0; k<quantidade; k++){
        printf("Informe o numero da posicao %d: ", k);
        scanf("%d", &vetor1[k]);
    }
    printf("\nVetor com elementos invertidos: \n");
    for(k=quantidade-1; k>=0; k--){
        printf("%d ", vetor1[k]);
    }
    

}