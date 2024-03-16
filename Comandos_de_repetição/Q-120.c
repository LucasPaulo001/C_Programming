#include <stdio.h>
#include <conio.h>

/*120. Escreva um programa que leia um número inteiro positivo N e imprima a maior 
quantidade possível de números inteiros positivos de forma que a soma de todos os 
números impressos seja menor ou igual a N.*/

void main(){
    int n, soma=0, k, num=0;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);//5
    while(num<n){
        for(k=1; k<=n/*5*/; k++){
            soma = soma + k;//1, 3
            if(soma <= n){
                printf("%d ", soma);//1, 3
            }
            n--;
        }
        num++;
    }
}