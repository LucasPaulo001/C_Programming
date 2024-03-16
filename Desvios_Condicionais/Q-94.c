#include <stdio.h>
#include <conio.h>

/*94. Escreva um programa que leia um valor inteiro a ser sacado pelo usuário e identifique quantas cédulas de cada tipo devem ser usadas para que o saque seja efetuado. Você pode supor que o caixa tem cédulas de R$ 10,00, R$ 20,00, R$ 50,00 e R$ 100,00. O valor máximo de um saque é R$ 1000,00 e, para cada saque, deve-se priorizar o uso das cédulas maiores. */

void main(){
    //Lendo o valor a ser sacado
    int valor_saque;
    printf("Informe um valor a ser sacado: ");
    scanf("%d", &valor_saque);
    //Atribuindo valor "0" para as cedulas, pois elas serão contadas a partir de 0
    int cedula_100=0, cedula_50=0, cedula_20=0, cedula_10=0;

    //Vamos supor que o valor a ser sacado será 250R$

    if(valor_saque>=100){ 

        //Aqui o valor 250 será dividido por 100 e pegaremos apenas o quociente que resultará em "2".50(que é a quantidade de cédulas de 100 que precisaremos)
        cedula_100 = valor_saque/100;

        //Após saber a quantidade de cédulas de cem, agora pegaremos o resto da divisão e atribuímos ao valor do saque
        valor_saque = valor_saque%100;
    }

    //A partir de agora o valor do saque vale o resto da divisão por cem feita anteriormente que é 50 *250/100 = 2."50"

    if(valor_saque>=50){

        //Faremos agora 50/50 = 1, que é a quantidade de cédulas de 50 que precisaremos
        cedula_50 = valor_saque/50;

        //O resto da divisão atenrior dará "0", então não teremos mais cédulas.
        valor_saque = valor_saque%50;
    }
    if(valor_saque>=20){
        cedula_20 = valor_saque/20;
        valor_saque = valor_saque%20;
    }
    if(valor_saque>=10){
        cedula_10 = valor_saque/10;
        valor_saque = valor_saque%10;
    }
    //No exemplo acima com 250R$ obtivemos duas cédulas de 100 e uma de 50
    printf("Quantidade de cedulas de 100R$: %d\n", cedula_100);
    printf("Quantidade de cedulas de 50R$: %d\n", cedula_50);
    printf("Quantidade de cedulas de 20R$: %d\n", cedula_20);
    printf("Quantidade de cedulas de 10R$: %d\n", cedula_10);

    getch();
}
    