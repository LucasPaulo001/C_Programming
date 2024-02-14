#include <stdio.h>
#include <conio.h>
const float poupanca = 0.25;

/*João resolveu poupar dinheiro para comprar um carro. Para isso, ele decidiu que todo mês irá poupar 25% do seu salário, até conseguir juntar um bom valor para ser dado como entrada. Com base nestas informações, escreva um programa que receba como 
entrada o valor do salário atual de João e o valor que ele deseja juntar como entrada e calcule quanto tempo ele terá que trabalhar para conseguir juntar o valor desejado. A resposta deve ser dada na forma x anos e y meses.*/

void main(){
    float valor_sal, valor_entrada;
    printf("Informe o salario de Joao e o valor que quer dar como entrada: ");
    scanf("%f%f", &valor_sal, &valor_entrada);
    float valor_poupanca = valor_sal*poupanca;
    int meses = valor_entrada/valor_poupanca;
    if(meses >= 12){
        int tempo_ano = meses/12;
        int tempo_meses = meses%12;
        printf("Ele levara %d ano(s) e %d mes(es)", tempo_ano, tempo_meses);
    }else{
        printf("Ele levara %d mes(s)", meses);
    }

}