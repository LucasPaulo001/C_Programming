#include <stdio.h>
#include <conio.h>

/*93. Escreva um programa em que leia um número inteiro entre 1000 e 9999 e verifique se o número lido é ou não um palíndromo.*/

void main(){
    int num;
    printf("Informe um numero inteiros entre 1000 e 9999: ");
    scanf("%d", &num);
    int centena_milhar = num/1000;
    int centena = num%1000/100;
    int mult1 = centena_milhar * 100;
    int mult2 = centena * 1000;
    int soma = mult1 + mult2;
    int primeira_parte = soma/100;
    int segunda_parte = num%100;
    if(primeira_parte == segunda_parte){
        printf("Eh um palidromo!");
    }
    else{
        printf("Nao eh um palidromo! ");
    }

    getch();
}