#include <stdio.h>

    /*62) Escreva um programa que leia dois números inteiros M e N e verifique se N é múltiplo de M.*/

void main(){
    int m, n;
    printf("Informe dois numeros inteiros: ");
    scanf("%d%d", &m, &n);
    if(m>n){
        if(m%n==0){
            printf("Eh multiplo! ");
        }else{
            printf("Nao eh multiplo! ");
        }
    }
    if(m<n){
        if(n%m==0){
            printf("Eh multiplo! ");
        }else{
            printf("Nao eh multiplo! ");
        }
    }

}