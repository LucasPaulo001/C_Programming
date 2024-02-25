
#include <stdio.h>
#include <conio.h>
const float desconto_a_vista = 0.1;
const float juros_10x = 0.2;

    /*28. Uma loja oferece três formas de pagamento para os seus clientes. Caso a compra seja paga à vista, a loja oferece um desconto de 10%. Caso a compra seja paga em três parcelas no cartão de crédito, o cliente paga o preço original (sem descontos, mas sem juros) da compra. Caso a compra seja paga em dez parcelas no cartão de crédito, a loja acrescenta uma taxa de juros de 20% sobre o valor da compra. Todas as dez parcelas têm exatamente o mesmo valor. Com base nessas informações, escreva um programa que leia o valor da compra de um cliente e informe: o valor da compra se ela for paga à vista, o valor de cada parcela se a compra for paga no cartão e em três parcelas (por exemplo, 3 parcelas de R$ 50,00) e o valor de cada parcela se a compra for paga com o cartão de crédito e em dez parcelas.*/

void main(){
    float valor_compra;
    printf("Informe o valor da compra: ");
    scanf("%f", &valor_compra);
    float a_vista = valor_compra - (valor_compra * desconto_a_vista);
    float parcelas_3x = valor_compra;
    float parcelas_10x = valor_compra + (valor_compra * juros_10x);
    printf("Valor da compra a vista: %.2f\n", a_vista);
    printf("Valor das parcelas em 3x: %.2f\n", parcelas_3x);
    printf("Valor das parcelas em 10x: %.2f", parcelas_10x);

    getch();
}