#include <stdio.h>
#include <conio.h>
const float taxa_01_prestacao = 0.2;
const float juros = 0.07;

/*47. Um banco está realizando uma grande promoção em seus financiamentos. Ele financia qualquer valor em 5 prestações. O valor da primeira prestação corresponde à 20% do valor do empréstimo. Os valores das demais prestações correspondem ao valor da parcela anterior acrescido de uma taxa de juros de 7%. Com base nestas informações, escreva um programa que leia o valor a ser financiado por um cliente e calcule: o valor de cada prestação, o valor total que o cliente vai pagar pelo
empréstimo e o total de juros que o cliente vai pagar pelo empréstimo.*/

void main(){
    float financiamento;
    printf("Informe o valor a ser financiado: ");
    scanf("%f", &financiamento);
    float valor_prestacao = financiamento / 5;
    float prestacao01 = valor_prestacao + (financiamento * taxa_01_prestacao);
    float prestacao02 = prestacao01 + (prestacao01 * juros);
    float prestacao03 = prestacao02 + (prestacao02 * juros);
    float prestacao04 = prestacao03 + (prestacao03 * juros);
    float prestacao05 = prestacao04 + (prestacao04 * juros);
    printf("Parcela 01: %.2fR$\n", prestacao01);
    printf("Parcela 02: %.2fR$\n", prestacao02);
    printf("Parcela 03: %.2fR$\n", prestacao03);
    printf("Parcela 04: %.2fR$\n", prestacao04);
    printf("Parcela 05: %.2fR$\n", prestacao05);
    float valor_emprestimo = prestacao01 + prestacao02 + prestacao03 + prestacao04 + prestacao05;
    printf("Valor total do emprestimo: %.2fR$\n", valor_emprestimo);
    float total_juros = valor_emprestimo - financiamento;
    printf("Valor dos juros: %.2fR$", total_juros);

    getch();
}