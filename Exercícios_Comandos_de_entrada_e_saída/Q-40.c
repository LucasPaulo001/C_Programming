#include <stdio.h>
#include <conio.h>
const float taxa = 0.1;
const float couvert = 10.00;

    /*40. Escreva um programa que leia o valor total que um cliente consumiu em um 
    restaurante e determine o valor final da sua conta, considerando que o restaurante cobra uma taxa de serviço de 10% e uma taxa de couvert artístico de R$ 10,00.*/

void main(){
    float consumo;
    printf("Informe o valor total consumido: ");
    scanf("%f", &consumo);
    float valor_com_taxa = consumo + (consumo * taxa);
    float valor_final = valor_com_taxa + couvert;
    printf("Valor total: %.2f", valor_final);

    getch();
}