#include <stdio.h>
#include <conio.h>
const float preco_m2 = 300;

    /*20. Em uma determinada cidade, cada m2 de um terreno está avaliado em R$ 300,00. Escreva um programa que leia o comprimento e a largura de um terreno localizado nesta cidade e calcule o seu valor de mercado.*/

void main(){
    float comprimento, largura;
    printf("Informe o comprimento e a largura do terreno: ");
    scanf("%f%f", &comprimento, &largura);
    float area = comprimento * largura;
    float valor_mercado = area*preco_m2;
    printf("Valor de mercado: %.2fR$", valor_mercado);

    getch();
}