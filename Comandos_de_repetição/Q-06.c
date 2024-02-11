#include <stdio.h>

    /*103) Escreva um programa que leia um número inteiro N e verifique se ele é um número primo.*/

void main(){
    int num, k, primo=0;
    printf("Informe um nemero inteiro: ");
    scanf("%d", &num);
    for(k=1; k<=num; k++){
        if(num%k==0){
            primo++;
        }
    }
    if(primo==2){
        printf("Numero primo! ");
    }else{
        printf("Nao eh um numero primo! ");
    }

}

 