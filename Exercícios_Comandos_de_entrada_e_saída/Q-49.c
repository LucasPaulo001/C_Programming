#include <stdio.h>
#include <conio.h>
const float ipi = 0.20;

/*49. Uma revendedora de veículos resolveu fazer uma promoção em seus veículos. Nesta 
revendedora, o preço de um veículo é calculado através do seu preço de compra, mais 
uma taxa de 20% de IPI, 17% de ICMS e uma margem de lucro de 20%. Nesta 
promoção, a revendedora resolveu tirar o valor do IPI. Com base nestas informações, 
escreva um programa que leia o preço atual de um veículo e calcule qual deve ser o 
seu preço na promoção. */

void main(){
    float valor_atual;
    printf("Informe o preco atual do veiculo: ");
    scanf("%f", &valor_atual);
    float valor_promoc = valor_atual - (valor_atual*ipi);
    printf("Valor do veiculo apos a promocao: %.2f", valor_promoc);

    getch();
}