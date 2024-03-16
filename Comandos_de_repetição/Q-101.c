#include <stdio.h>

    /*101) Escreva um programa que leia um número inteiro positivo N e imprima os N 
    primeiros números ímpares positivos.*/

void main(){
    int k, num;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &num);
    for(k=1; k<=num*2; k++){
        if(k%2!=0){
            printf("%d ", k);
        }
    }

}