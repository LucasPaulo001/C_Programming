#include <stdio.h>

    /*100) Escreva um programa que leia um número inteiro positivo N e imprima os N 
    primeiros números pares positivos.*/

void main(){
    int num, k;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &num);
    for(k=1; k<=num*2; k++){
        if(k%2==0){
            printf("%d ", k);
        }
    }

}  