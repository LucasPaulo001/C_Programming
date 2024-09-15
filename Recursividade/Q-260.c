#include <stdio.h>
#include <conio.h>

/*260. Escreva um subprograma recursivo que receba como entrada um número inteiro e 
calcule a sua quantidade de algarismos.*/

int quant(int n/*1*/){
    
    if(n < 10){
        return 1;
    }
    else{
        return 1 + quant(n/10);
    }
}

void main(){
    int n;
    printf("Informe um numero intero: ");
    scanf("%d", &n);
    printf("%d", quant(n));

    getch();
}