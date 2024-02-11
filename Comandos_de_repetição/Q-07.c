#include <stdio.h>

    /*104) Escreva um programa que leia um número inteiro N e verifique se ele é um número perfeito. Um número é perfeito quando ele é igual à soma de todos os seus divisores exatos exceto ele mesmo. Por exemplo, o número 6 (1+2+3) é um número perfeito.*/

void main(){
    int num, k, soma=0;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    for(k=1; k<num; k++){
        if(num%k==0){
            soma = soma + k;
        }
    }
    if(soma==num){
        printf("Eh um numero perfeito! ");
    }else{
        printf("Nao eh um numero perfeito! ");
    }
    

}