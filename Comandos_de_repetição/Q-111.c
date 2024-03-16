#include <stdio.h>
#include <conio.h>

/*111. Escreva um programa que leia o termo inicial e a razão de uma PA e um número 
inteiro positivo N e imprima os N primeiros termos da progressão.*/

void main(){
    int termo_inicial, razao, n;
    printf("Informe o termo inicial e a razao da PA: ");
    scanf("%d%d", &termo_inicial, &razao);
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    int k=0;
    while (k<n){
        termo_inicial = termo_inicial + razao;
        k++;
        printf("%d\n", termo_inicial);
    }
    getch();
}