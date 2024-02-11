#include <stdio.h>

    /*102) Escreva um programa que leia um número inteiro N e imprima todos os seus 
    divisores exatos.*/

void main(){
    int num, k;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    for(k=1; k<=num; k++){
        if(num%k==0){
            printf("%d ", k);
        }
    }

}