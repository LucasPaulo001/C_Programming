#include <stdio.h>
#include <conio.h>

    /*125. Escreva um programa que leia um número inteiro positivo N e imprima os N primeiros números perfeitos. */

void main(){
    int num, num_perf=6, k;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    while(num>0){
        int soma=0;
        for(k=1; k<num_perf; k++){
            if(num_perf%k==0){
                soma = soma + k;
            }
        }
        if(soma==num_perf){
            printf("%d ", num_perf);
            num--;
        }
        num_perf++;
    }
}