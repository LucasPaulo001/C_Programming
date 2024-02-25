#include <stdio.h>
#include <conio.h>
#include <math.h>


/*Escreva um programa que leia os coeficientes a, b e c de uma equação do 2º grau e 
calcule todas as suas raízes reais.*/

void main(){
    int a, b, c;
    printf("Informe os coeficientes a, b e c: ");
    scanf("%d%d%d", &a, &b, &c);
    int delta = pow(b,2) - 4*a*c;
    float raiz1 = -b + sqrt(delta)/2*a;
    float raiz2 = -b - sqrt(delta)/2*a;
    printf("Delta: %d ", delta);
    printf("\nPrimeira raiz: %.2f ", raiz1);
    printf("\nSegunda raiz: %.2f ", raiz2);

    getch();
}