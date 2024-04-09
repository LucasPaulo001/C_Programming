#include <stdio.h>
#include <conio.h>

/*120. Escreva um programa que leia um número inteiro positivo N e imprima a maior 
quantidade possível de números inteiros positivos de forma que a soma de todos os 
números impressos seja menor ou igual a N.*/

void main(){
    int n, soma=0, k, num=0, cont=0;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);//6
    while(n>1){//num = 3
        for(k=1; k<=n/*6*/; k++){
            soma = soma + k;//1, 3, 6
            if(soma <= n){
                cont++;
                printf("%d ", cont);//1, 2, 3  
            }
            n--;
        }
    }
}