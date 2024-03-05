#include <stdio.h>
#include <conio.h>
const float valor_KWh = 0.35;
const float valor_icms = 0.17;
const float valor_ilu_publ = 15.00;

    /*45. Escreva um programa que leia os dois últimos valores da leitura de um medidor de energia em KWh e calcule o valor da conta de energia, considerando que: o preço de 1 KWh é R$ 0,35, o valor da ICMS corresponde à 17% do valor do consumo e a taxa de iluminação pública é de R$ 15,00.*/

void main(){
    
    int leitura1;
    printf("Informe a primeira leitura em KWh: ");
    scanf("%d", &leitura1);
    int leitura2;
    printf("Informe a segunda leitura em KWh: ");
    scanf("%d", &leitura2);

    //Obtendo o consumo mensal subtraindo as duas leituras
    int sub = leitura1 - leitura2;

    //Transformando o resultado em um número positivo se caso a subtração resulte em um número negativo, usando a função abs(absoluto)
    int trf_posit = abs(sub);

    //Obtendo o valor mensal sem taxa
    int valor_mensal = trf_posit * valor_KWh;
    
    //Obtendo o valor mensal com as taxas
    float valor_com_taxa = valor_mensal + (valor_mensal * valor_icms) + valor_ilu_publ;
    printf("Valor da conta de luz = %.2fR$", valor_com_taxa);

    getch();
}