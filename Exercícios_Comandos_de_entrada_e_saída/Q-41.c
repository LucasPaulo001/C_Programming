#include <stdio.h>
#include <conio.h>
const int quantidade_hr = 160;
const float taxa = 0.5;

/*41. Escreva um programa que leia a quantidade de horas trabalhadas por um funcionário de uma empresa durante um mês e o valor de cada hora trabalhada e determine o seu pagamento. O programa deve considerar que a carga-horária mensal do funcionário é de 160 horas e que o valor de cada hora extra corresponde ao valor da hora trabalhada acrescido de uma taxa de 50%. Para resolver a questão, considere que a
quantidade de horas trabalhadas nunca será inferior a 160.*/

void main(){
    int horas_trabalhadas;
    float valor_hr;
    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);
    printf("Informe o valor de cada hora trabalhada: ");
    scanf("%f", &valor_hr);
    float valor_mensal = horas_trabalhadas * valor_hr;
    int horas_ext = horas_trabalhadas - quantidade_hr;
    float valor_hr_ext = horas_ext * (valor_hr + (valor_hr * taxa));
    float pagamento_total = valor_mensal + valor_hr_ext;
    printf("Valor pagamento: %.2fR$\n", valor_mensal);
    printf("Valor de horas extras: %.2fR$\n", valor_hr_ext);
    printf("Valor do pagamento total: %.2f", pagamento_total);

    getch();
}
