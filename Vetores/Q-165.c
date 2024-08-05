#include <stdio.h>
#include <conio.h>
const int quantidade = 5;
/*165. Escreva um programa que leia dois vetores A e B de 5 números inteiros e calcule um terceiro vetor que contenha todos os elementos que estão presentes nos dois vetores. O terceiro vetor não deverá armazenar valores repetidos.*/

void main(){

    int k, vetorA[quantidade], vetorB[quantidade], vetorC[quantidade];
    for(k=0; k<quantidade; k++){
        printf("Informe um numero inteiro [vetor-A]: ");
        scanf("%d", &vetorA[k]);
    }
    for(k=0; k<quantidade; k++){
        printf("Informe um numero inteiro [vetor-B]: ");
        scanf("%d", &vetorB[k]);
    }
    for(k=0; k<quantidade; k++){
        if(vetorA[k]==vetorB[k]){
            vetorC[k]=vetorA;
            printf("%d ", vetorC);
        }
        if(vetorA[k]!=vetorB[k]){
            vetorC[k] = vetorB[k];
            printf("%d ", vetorC[k]);
        }
    }
    getch();
}