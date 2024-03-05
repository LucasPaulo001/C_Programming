#include <stdio.h>
#include <conio.h>
const float taxa = 0.04;

/*48. Uma financeira está oferecendo uma nova modalidade de empréstimo para os seus 
clientes. Nesta modalidade, o cliente pode pagar o valor financiado em até 120 
parcelas, todas as parcelas com o mesmo valor. O valor de cada parcela corresponde 
ao valor do empréstimo dividido pelo número de parcelas, mais uma taxa de 4% sobre 
o valor total financiado. Com base nestas informações, escreva um programa que leia 
um valor a ser financiado pelo cliente e o número de parcelas desejadas e calcule o 
valor de cada parcela e o valor total que o cliente pagará pelo empréstimo. 
*/

void main(){
    float financiamento, parcelas;
    printf("Informe o valor financiado pelo cliente e o numero de parcelas: ");
    scanf("%f%f", &financiamento, &parcelas);
    float valor_total = (financiamento/parcelas)+financiamento+(financiamento*taxa);
    float valor_parcelas = valor_total/parcelas;
    printf("Valor total: %.2f\n", valor_total);
    printf("Valor de parcelas: %.2f", valor_parcelas);

    getch();
}