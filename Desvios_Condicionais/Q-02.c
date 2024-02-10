#include <stdio.h>

    /*59) Escreva um programa que leia dois números e determine se o segundo número é 
    menor, igual ou maior que o primeiro.*/

void main(){
    int num1, num2;
    printf("Informe dois numeros: ");
    scanf("%d%d", &num1, &num2);
    if(num1<num2){
        printf("O segundo numero eh maior que o primeiro! ");
    }else if(num1>num2){
        printf("O segundo numero eh menor que o primeiro! ");
    }else{
        printf("O segundo numero eh igual ao primeiro");
    }

}
