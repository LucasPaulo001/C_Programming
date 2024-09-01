#include <stdio.h>
#include <conio.h>
const int linhas=4, colunas=4;

/*176. Escreva um programa que leia uma matriz quadrada de ordem 4 de números inteiros e imprima a matriz lida.*/

void main(){

    int matriz[linhas][colunas],k, i;
    for(k=0; k<linhas; k++){
        for(i=0; i<colunas; i++){
            printf("Informe um numero inteiro: ");
            scanf("%d", &matriz[k][i]);
        }
    }
    for(k=0; k<linhas; k++){
        for(i=0; i<colunas; i++){
            printf("%3d ", matriz[k][i]);
        }
        printf("\n");
    }
    getch();
}