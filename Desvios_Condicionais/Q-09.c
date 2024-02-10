#include <stdio.h>

    /*Escreva um programa que leia o valor de um ano e verifique se ele é ou não bissexto.Um ano é bissexto se ele for divisível por quatrocentos ou se se ele for divisível por 4 mas não for divisível por 100.*/

void main(){
    int ano;
    printf("Informe o valor do ano: ");
    scanf("%d", &ano);
    if(ano%400==0 || ano%4==0 && ano%100!=0){
        printf("Ano bissexto! ");
    }else{
        printf("Nao eh bissexto! ");
    }
}