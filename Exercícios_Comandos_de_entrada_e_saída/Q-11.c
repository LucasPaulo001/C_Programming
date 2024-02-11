#include <stdio.h>

    /*11) Escreva um programa que leia um valor em real, a cotação atual do dólar e calcule o valor informado pelo usuário em dólares. */

void main(){
    float real, dolar;
    printf("Informe o valor em real: ");
    scanf("%f", &real);
    printf("Informe o valor do dolar atual: ");
    scanf("%f", &dolar);
    float valor_dolares = real*dolar;
    printf("O valor %.2fR$ equivale a: %.2f dolares ", real, valor_dolares);
}