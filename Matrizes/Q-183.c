#include <stdio.h>
#include <conio.h>
const int linha=5, coluna=5;

/*183. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
a seguir leia um número inteiro N entre 1 e 5 e calcule a soma de todos os elementos 
da linha N.*/

void main(){

    float matriz[linha][coluna], soma=0.0;
    int k, i, n;
    //Lendo a matriz
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            printf("Informe o valor que sera armazenado na matriz: ");
            scanf("%f", &matriz[k][i]);
        }
    }
    printf("\nMATRIZ\n");
    //Informando a matriz
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            printf("%.1f ", matriz[k][i]);
        }
        printf("\n");
    }
    //Lendo o numero inteiro N
    printf("\nInforme um numero inteiro entre 1 e 5: ");
    scanf("%d", &n);
    //Somando os elementos da linha N
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            if(k==n-1){
                soma=soma+matriz[k][i];
            }
        }
    }
    //Informando a soma dos valores da linha N
    printf("Soma dos valores da linha %d: %.1f ", n, soma);

    getch();
}