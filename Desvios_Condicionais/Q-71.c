#include <stdio.h>
#include <conio.h>

/*Escreva um programa que leia três números inteiros distintos e identifique o maior 
número lido.*/

void main(){
    int num1, num2, num3;
    printf("Informe tres numeros inteiros distintos: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    if(num1 > num2 && num1 > num3){
        printf("Maior numero: %d ", num1);
    }else if(num2 > num1 && num2 > num3){
        printf("Maior numero: %d ", num2);
    }else{
        printf("Maior numero: %d " , num3);
    }
    getch();
}