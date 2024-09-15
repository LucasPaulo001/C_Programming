#include <stdio.h>
#include <conio.h>

/*223. Escreva um programa que leia um número inteiro e verifique se ele é par ou ímpar. A verificação de ser realizada através de um subprograma.*/

void verificacao(int n){
    if(n%2==0){
        printf("Par");
    }
    else{
        printf("Impar");
    }
}

void main(){
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    verificacao(n);

    getch();
}