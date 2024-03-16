#include <stdio.h>

    /*64) Escreva um programa que leia um número inteiro e verifique se ele é positivo, negativo ou neutro.*/

void main(){
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    if(num<0){
        printf("Numero negativo. ");
    }else if(num>0){
        printf("Numero positivo. ");
    }else if(num==0){
        printf("Numero neutro. ");
    }

}