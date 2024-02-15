#include <stdio.h>
#include <conio.h>

    /*Escreva um programa que leia os valores dos três ângulos internos de um triângulo e verifique se o mesmo é um triângulo retângulo.*/

void main(){
    int lado1, lado2, lado3;
    printf("Informe os tre angulos do triangulo: ");
    scanf("%d%d%d", &lado1, &lado2, &lado3);
    if(lado1 == 90 || lado2 == 90 || lado3 == 90){
        printf("O triangulo eh um triangulo retangulo ");
    }else{
        printf("O triangulo nao eh um triangulo retangulo ");
    }

    getch();
}