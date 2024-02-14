#include <stdio.h>
#include <conio.h>


/*73) Escreva um programa que leia três números inteiros distintos e identifique o maior e o menor número lido.*/

void main(){
    int num1, num2, num3;
    printf("Informe tres numeros inteiros distintos: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if(num1 > num2 && num2 > num3){ // 6 3 2
        printf("Maior numero: %d\n", num1);
        printf("Menor numero: %d", num3);
    }
    else if(num1 > num3 && num3 > num2){
        printf("Maior numero: %d\n", num1);
        printf("Menor numero: %d", num2);
    }
    else if(num2 > num1 && num1 > num3){ 
        printf("Maior numero: %d\n", num2);
        printf("Menor numero: %d", num3);
    }
    else if(num2 > num3 && num3 > num1){
        printf("Maior numero: %d\n", num2);
        printf("Menor numero: %d", num1);
    }
    else if(num3 > num2 && num2 > num1){ 
        printf("Maior numero: %d\n", num3);
        printf("Menor numero: %d", num1);
    }
    else if(num3 > num1 && num1 > num2){
        printf("Maior numero: %d\n", num3);
        printf("Menor numero: %d", num2);
    }

    getch();
}