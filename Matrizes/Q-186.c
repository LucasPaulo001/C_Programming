#include <stdio.h>
#include <conio.h>
const int linha=3, coluna=3;

/*186. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
a seguir leia um número inteiro N entre 1 e 5 e calcule o maior elemento da linha N.*/

void main(){

    float matriz[linha][coluna], maior;
    int k, i, n;
    //Lendo a matriz
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            printf("Informe o valor a ser armazenado na matriz: ");
            scanf("%f", &matriz[k][i]);
        }
    }
    //Informando a matriz
    printf("\nMATRIZ\n");
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            printf("%.1f ", matriz[k][i]);
        }
        printf("\n");
    }
    //Lendo número inteiro N
    printf("Informe um numero inteiro entre 1 e 5: ");
    scanf("%d", &n);
    //Verificando o maior valor da linha N
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            if(k==0 && i==0){
                maior=matriz[k][i];
            }
            if(k==n-1 && maior<matriz[k][i]){
                maior=matriz[k][i];
            }
        }
    }
    //Informando o maior valor da linha N
    printf("O maior valor da linha %d: %.1f ", n, maior);
    


}