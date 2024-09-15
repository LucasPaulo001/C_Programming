#include <stdio.h>
#include <conio.h>

/*210. Em uma determinada cidade, cada m2 de um terreno está avaliado em R$ 50,00. 
Escreva um programa que leia o comprimento e a largura de um terreno localizado 
nesta cidade e calcule o seu valor de mercado. O cálculo deve ser realizado através 
de um subprograma, que deve receber como entrada o comprimento e a largura do 
terreno.*/

float valor(float comprimento, float largura){
    float valor_mercado = (largura*comprimento)*50;
    return valor_mercado;
}
void main(){
    float comprimento, largura;
    printf("Informe o comprimento e a largura: ");
    scanf("%f%f", &comprimento, &largura);
    float valor_merc = valor(comprimento, largura);
    printf("O valor de mercado do terreno eh: %.2fR$", valor_merc);

    getch();
}