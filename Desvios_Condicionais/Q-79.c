#include <stdio.h>
#include <conio.h>
#include <math.h>

/*Escreva um programa que leia os coeficientes a, b e c de uma equação do 2º grau e 
verifique a quantidade de raízes reais da equação.*/

void main(){
    int a, b, c;
    printf("Informe os coeficientes da equacao do segundo grau: ");
    scanf("%d%d%d", &a, &b, &c);
    int delta = pow(b,2) * 4 * a * c;
    if(delta > 0){
        printf("A equacao tera duas raizes reais e distintas ");
    }else if(delta < 0){
        printf("A equacao nao possui raizes reais ");
    }else{
        printf("A equacao tera apenas uma raiz real ");
    }

}