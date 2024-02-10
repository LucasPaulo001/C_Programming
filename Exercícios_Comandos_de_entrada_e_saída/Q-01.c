#include <stdio.h>
#include <conio.h>

    /*1) Escreva um programa que leia três números inteiros e calcule a sua média aritmética.*/

void main(){
    int num1, num2, num3, media;
    printf("Informe tres numeros inteiros: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    media = (num1 + num2 + num3)/3;
    printf("Media aritmetica dos numeros informados: %d", media);

    getch();

}