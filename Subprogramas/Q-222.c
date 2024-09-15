#include <stdio.h>
#include <conio.h>

/*222. O Banco do Povo está realizando uma grande promoção em seus financiamentos. Ele financia qualquer valor em 5 prestações. O valor da primeira prestação corresponde à 20% do valor do empréstimo. Os valores das demais prestações correspondem ao valor da parcela anterior acrescido de uma taxa de juros de 7%. Escreva um programa que leia o valor a ser financiado por um cliente e calcule: o valor de cada prestação, o valor total que o cliente vai pagar pelo empréstimo e o total de juros que o cliente vai pagar pelo empréstimo. O programa deve ter um subprograma para calcular o valor de cada parcela do empréstimo. */

float parcela_01(float valor){
    float parcela = valor/5;
    float valor_parc_01 = valor*0.20;
    return valor_parc_01;
}
float parcela_02(float valor){
    float valor_parc_02 = parcela_01(valor) + (parcela_01(valor) * 0.07);
    return valor_parc_02;
}
float parcela_03(float valor){
    float valor_parc_03 = parcela_02(valor) + (parcela_02(valor) * 0.07);
    return valor_parc_03;
}
float parcela_04(float valor){
    float valor_parc_04 = parcela_03(valor) + (parcela_03(valor) * 0.07);
    return valor_parc_04;
}
float parcela_05(float valor){
    float valor_parc_05 = parcela_04(valor) + (parcela_04(valor) * 0.07);
    return valor_parc_05;
}

void main(){
    float valor;
    printf("Informe o valor a ser financiado: ");
    scanf("%f", &valor);
    float primeira_p = parcela_01(valor);
    float segunda_p = parcela_02(valor);
    float terceira_p = parcela_03(valor);
    float quarta_p = parcela_04(valor);
    float quinta_p = parcela_05(valor);
    printf("Primeira parcela: %.2f\n", primeira_p);
    printf("Segunda parcela: %.2f\n", segunda_p);
    printf("Terceira parcela: %.2f\n", terceira_p);
    printf("Quarta parcela: %.2f\n", quarta_p);
    printf("Quinta parcela: %.2f\n", quinta_p);

    getch();
}