#include <stdio.h>
#include <conio.h>

/*Escreva um programa que leia três números distintos e identifique o número que não
é nem o menor e nem o maior número. */

void main(){
    int num1, num2, num3;
    printf("Informe tres numeros inteiros distintos: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    if(num1 > num2 && num2 > num3){ 
        printf("Numero que nao eh nem maior e nem menor: %d", num2);
    }
    else if(num1 > num3 && num3 > num2){
        printf("Numero que nao eh nem maior e nem menor: %d", num3);
    }
    else if(num2 > num1 && num1 > num3){
        printf("Numero que nao eh nem maior e nem menor: %d", num1);
    }
    else if(num2 > num3 && num3 > num1){
        printf("Numero que nao eh nem maior e nem menor: %d", num3);
    }
    else if(num3 > num2 && num2 > num1){
        printf("Numero que nao eh nem maior e nem menor: %d", num2);
    }
    else if(num3 > num1 && num1 > num2){
        printf("Numero que nao eh nem maior e nem menor: %d", num1);
    }

    getch();
}