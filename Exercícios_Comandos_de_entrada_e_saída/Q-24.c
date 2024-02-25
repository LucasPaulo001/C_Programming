#include <stdio.h>
#include <conio.h>


    /*24. Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e imprima os 5 primeiros termos desta progressão.*/

void main(){
    int termo_inicial, razao;
    printf("Informe o termo inicial da PA e a razao: ");//5 + 2 = 7 / 7 + 2 = 9
    scanf("%d%d", &termo_inicial, &razao);
    int progressao1 = termo_inicial + razao;
    int progressao2 = progressao1 + razao;
    int progressao3 = progressao2 + razao;
    int progressao4 = progressao3 + razao;
    int progressao5 = progressao4 + razao;
    printf("%d, %d, %d, %d, %d", progressao1, progressao2, progressao3, progressao4, progressao5);

    getch();

}