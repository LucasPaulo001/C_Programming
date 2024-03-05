#include <stdio.h>
#include <conio.h>
#include <math.h>

    /*44. Escreva um programa que leia individualmente os valores dos quatro dígitos de um valor em binário e calcule o seu valor correspondente em decimal.*/

void main(){
    int valor1;
    printf("Informe o primeiro valor: ");
    scanf("%d", &valor1);
    int valor2;
    printf("Informe o segundo valor: ");
    scanf("%d", &valor2);
    int valor3;
    printf("Informe o terceiro valor: ");
    scanf("%d", &valor3);
    int valor4;
    printf("Informe o quarto valor: ");
    scanf("%d", &valor4);
    int valor_decimal = (valor1*(pow(2,3))) + (valor2*(pow(2,2))) + (valor3*(pow(2,1))) + (valor4*(pow(2,0)));
    printf("Valor da sequencia binaria em decimal: %d", valor_decimal);

    getch();
}