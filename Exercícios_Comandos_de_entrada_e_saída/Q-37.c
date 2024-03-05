#include <stdio.h>
#include <conio.h>


    /*37. Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor da unidade de milhar, da centena, da dezena e da unidade.*/

void main(){
    int num;
    printf("Informe um numero positivo entre 1 e 9999: ");
    scanf("%d", &num);//5654
    int unidade_milhar = (num/1000)*1000;
    int centena_milhar = (num%1000/100)*100;
    int dezena = (num%100/10)*10;
    int unidade = num%10;
    printf("Unidade de milhar: %d\n", unidade_milhar);
    printf("Centena de milhar: %d\n", centena_milhar);
    printf("Dezena: %d\n", dezena);
    printf("Unidade: %d", unidade);

    getch();
}