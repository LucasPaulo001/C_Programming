#include <stdio.h>
#include <conio.h>
const int linha=3, coluna=3;

/*184. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
a seguir leia um número inteiro N entre 1 e 5 e calcule a média aritmética dos
elementos da coluna N.
*/

void main(){

    float matriz[linha][coluna], media, soma=0.0;
    int k, i, n;
    //Lendo a matriz
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            printf("Informe o valor que sera armazenado na matriz: ");
            scanf("%f", &matriz[k][i]);
        }
    }
    printf("\nMATRIZ\n");
    //Informando vetor
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            printf("%.1f ", matriz[k][i]);
        }
        printf("\n");
    }
    //Lendo número inteiro N
    printf("Informe um numero inteiro entre 1 e 5: ");
    scanf("%d", &n);
    //Somando os valores da coluna N
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            if(i==n-1){
                soma = soma + matriz[k][i];
            }
        }
    }
    printf("\n");
    //Calculando a média dos valores da coluna N
    media = soma/coluna;
    printf("A media aritmetica da coluna %d: %.2f", n, media);

    getch();
}