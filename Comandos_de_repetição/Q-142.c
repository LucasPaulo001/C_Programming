#include <stdio.h>
#include <conio.h>

/*142. O Banco do Povo está realizando uma grande promoção em seus financiamentos. Ele financia qualquer valor em até 240 prestações. O valor da primeira prestação 
corresponde ao valor do empréstimo dividido pelo número de parcelas. Os valores 
das demais prestações correspondem ao valor da parcela anterior acrescido de uma 
taxa de juros de 7%. Escreva um programa que leia o valor a ser financiado por um
cliente e o número de prestações desejadas e calcule: o valor de cada prestação, o 
valor total que o cliente vai pagar pelo empréstimo e a diferença entre o valor a ser 
pago e o valor financiado. */

void main(){
    int prestacao=1, num_prestacao;
    float valor_financ, valor_prestacao, valor_parcela, valor_total;
    printf("Qual o valor a ser financiado: ");
    scanf("%f", &valor_financ);
    printf("Informe o numero de prestacoes desejadas: ");
    scanf("%d", &num_prestacao);
    if(num_prestacao>240){
        do{
            printf("Numero de prestacoes invalido! insira outro valor de prestacoes! ");
            scanf("%d", &num_prestacao);

        }while(num_prestacao>240);
    }
    while(prestacao<=num_prestacao){
        if(prestacao==1){
            valor_prestacao = valor_financ/num_prestacao;
        }
        valor_parcela = valor_prestacao + (valor_prestacao*0.7);
        valor_total = (valor_prestacao + valor_parcela) * prestacao;
        
        prestacao++;
    }
        float dif = valor_total - valor_financ;
        printf("Valor total: %.2f \n", valor_total);
        printf("Valor de cada parcela: %.2f\n", valor_parcela);
        printf("Diferenca entre financiamento e total a pagar: %.2f ", dif);
        
        getch();
    }

    