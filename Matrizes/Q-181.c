#include <stdio.h>
#include <conio.h>
const int linha=5, coluna=5;

/*181. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
a seguir leia um número inteiro N entre 1 e 5 e imprima os N primeiros elementos da 
sua diagonal principal. */

void main(){

    float matriz[linha][coluna];
    int k, i, n;
    //Lendo a matriz
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            printf("Informe o valor da matriz: ");
            scanf("%f", &matriz[k][i]);
        }
    }
    printf("\n");
    //Lendo número inteiro N com a repetição de n se caso for maior que a diagonal principal
    do{
        printf("Informe o numero de valores da diagonal principal que quer informar: ");
        scanf("%d", &n);
        if(n>linha && n>coluna){
            printf("Diagonal principal acima de seu tamanho! ");
        }
    }while(n>linha && n>coluna);
    //Informando os N primeiros elementos da sua diagonal principal
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            if(k==i && k<n && i<n){
                printf("%.1f ", matriz[k][i]);
            }
        }
        printf("\n");
    }

    getch();

}