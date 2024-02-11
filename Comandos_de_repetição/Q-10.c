#include <stdio.h>

    /*Escreva um programa que leia dois números inteiros M e N e calcule a média 
    aritmética dos números primos do intervalo [M, N].*/

void main(){
    int num1, num2, k, i, primo, cont=0, soma=0, media;
    printf("Informe dois numeros inteiros: ");
    scanf("%d%d", &num1, &num2);
    for(k=num1; k<=num2; k++){
        primo=0;
        for(i=1; i<=k; i++){
            if(k%i==0){
                primo++;
            }
        }
        if(primo==2){
            soma = soma + k;
            cont++;
            printf("%d ", k);
        }
        media = soma/cont;
    }
    printf("\nMedia aritmetica dos numeros primos = %d", media);
    
}