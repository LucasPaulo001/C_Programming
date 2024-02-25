#include <stdio.h>
#include <conio.h>

    /*Escreva um programa que leia um número inteiro N e imprima os 10 primeiros 
    elementos da sua tabuada. A saída do programa deve seguir o formato abaixo, que 
    mostra os 5 primeiros elementos da tabuada do 2.
    1 X 2 = 2
    2 X 2 = 4
    3 X 2 = 6
    4 X 2 = 8
    5 X 2 = 10*/

void main(){
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    int mult1 = 1*n;
    int mult2 = 2*n;
    int mult3 = 3*n;
    int mult4 = 4*n;
    int mult5 = 5*n;
    printf("1 x %d = %d\n",n, mult1);
    printf("2 x %d = %d\n",n, mult2);
    printf("3 x %d = %d\n",n, mult3);
    printf("4 x %d = %d\n",n, mult4);
    printf("5 x %d = %d",n, mult5);

    getch();
}