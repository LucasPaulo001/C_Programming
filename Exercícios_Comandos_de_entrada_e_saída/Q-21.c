#include <stdio.h>
#include <conio.h>

    /*21. Escreva um programa que leia o preço de produção de um determinado produto e a margem de lucro desejada pelo fabricante e calcule qual deve ser o seu preço de venda.*/

void main(){
    float valor_producao, margem_lucro;
    printf("Informe o preco de producao do produto e a margem de lucro desejada: ");
    scanf("%f%f", &valor_producao, &margem_lucro);
    float preco_venda = valor_producao + margem_lucro;
    printf("Valor de producao: %.2fR$", preco_venda);

    getch();
}