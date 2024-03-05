#include <stdio.h>

/*68) Escreva um programa que leia o valor do salário bruto de um empregado e calcule o seu salário líquido. Para calcular o valor do salário líquido, deve-se primeiramente descontar uma taxa de 11%, correspondente ao valor da contribuição previdenciária. Depois, do valor restante, deve-se descontar o valor do imposto de renda, que varia de acordo com o valor do salário. O percentual que deve ser descontado para o imposto de renda varia de acordo com a tabela abaixo.

até 1.903,98 --> Isento
de 1.903,99 até 2.826,65 --> 7,5%
de 2.826,66 até 3.751,05 --> 15%
de 3.751,06 até 4.664,68 --> 22,5%
a partir de 4.664,69 --> 27,5%*/

void main(){
    float sal, imposto_renda;
    printf("Informe o valor do salario bruto: ");
    scanf("%f", &sal);
    float sal_liquido = sal - (sal*0.11);
    if(sal<=1903.98){
        printf("Salario liquido: %.2f\n", sal_liquido);
        printf("Insento do imposto de renda");

    }else if(sal>=1903.99 && sal<=2826.65){
        printf("Salario liquido: %.2f\n", sal_liquido);
        imposto_renda = sal_liquido - (sal_liquido*0.075);
        printf("Salario apos o imposto de renda: %.2f", imposto_renda);

    }else if(sal>=2826.66 && sal<=3751.05){
        printf("Salario liquido: %.2f\n", sal_liquido);
        imposto_renda = sal_liquido - (sal_liquido*0.15);
        printf("Salario apos o imposto de renda: %.2f", imposto_renda);

    }else if(sal>=3751.06 && sal<=4664.68){
        printf("Salario liquido: %.2f\n", sal_liquido);
        imposto_renda = sal_liquido - (sal_liquido*0.225);
        printf("Salario apos o imposto de renda: %.2f", imposto_renda);

    }else if(sal>=4664.69){
        printf("Salario liquido: %.2f\n", sal_liquido);
        imposto_renda = sal_liquido - (sal_liquido*0.275);
        printf("Salario apos o imposto de renda: %.2f", imposto_renda);
    }

}