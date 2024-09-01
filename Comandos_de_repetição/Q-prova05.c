#include <stdio.h>
#include <conio.h>

/*A matemática prova que números inteiros podem ser representados de maneira 
única como um produto de potências de números primos distintos. Este produto 
é chamado de decomposição em fatores primos do número e os expoentes são 
chamados de multiplicidade do primo respectivo. Por exemplo, 360 = 
2x2x2x3x3x5 e 21 = 3x7. Com base nessas informações, escreva um programa 
em C que obtenha a decomposição em fatores primos de um número inteiro 
positivo informado pelo usuário. A resposta do programa deve ser informada em 
várias linhas. Cada linha deve ter o formato “a ^ n”, no qual a representa o fator 
e n representa o número de vezes que ele deve ser usado. Alguns exemplos de 
saída podem ser vistos abaixo:
Número = 360 (2x2x2x3x3x5)
Resposta: 
2 ^ 3
3 ^ 2
5 ^ 1*/

void main(){
    int num, k, quant_div, primo=2;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    int decomp=num;
    while(num>0){
        quant_div=0;
        for(k=1; k<=primo; k++){
            if(primo%k==0){
                quant_div++;
            }
        }
        if(quant_div==2){
            if(decomp%primo==0){
                int cont_decomp=0;
                while (decomp%primo==0){
                    decomp=decomp/primo;
                    cont_decomp++;
                }
                printf("%d ^ %d\n", primo, cont_decomp);
                num--;
            }
        }
        primo++;
    }
    
    getch();
}