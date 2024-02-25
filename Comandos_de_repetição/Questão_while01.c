#include <stdio.h>
#include <conio.h>

/*Escreva um programa que leia um número inteiro positivo não nulo e calcule seu quadrado. Caso seja informado o zero, o programa deverá ser encerrado.*/

void main()
{
    int num, quadrado=0;
    while(num!=0){
        printf("Informe um numero inteiro nao nulo: ");
        scanf("%d", &num);
        quadrado = num*num;
        printf("Quadrado = %d \n", quadrado);
        if(num==0){
            printf("Encerrando...");
        }
    }

    getch();
}