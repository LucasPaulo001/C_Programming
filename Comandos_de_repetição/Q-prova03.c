#include <stdio.h>
#include <conio.h>

/*(Questão de prova 2021.1) A matemática prova que números inteiros podem ser representados de maneira única como um produto de potências de números primos distintos. Este produto é chamado de decomposição em fatores primos do número e os expoentes são chamados de multiplicidade do primo respectivo. Por exemplo, 360 = 
2x2x2x3x3x5 e 21 = 3x7. Com base nessas informações, escreva um programa 
em C que obtenha a decomposição em fatores primos de um número inteiro 
positivo informado pelo usuário.
*/

void main(){
    int num, primo=2, k;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &num);
    int decomp=num;
    while(decomp>1){
        int divisores=0;
        for(k=1; k<=primo; k++){
            if(primo%k==0){
                divisores++;
            }
        }
        if(divisores==2){
            if(num%primo==0){
                decomp=decomp/primo;
                while(num%primo==0){
                    printf("%d ", primo);
                    num=num/primo;
                }
            }
        }
        primo++;
    }
}