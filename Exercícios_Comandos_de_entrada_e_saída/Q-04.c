#include <stdio.h>
#include <math.h>

    /*4) Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu 
    triplo, o seu quadrado, o seu cubo e a sua raiz quadrada.*/

int main(void){
    int num;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &num);
    int dobro = num*2;
    int triplo = num*3;
    int quadrado = pow(num,2);
    int cubo = pow(num,3);
    int raiz_quadrada = sqrt(num);
    printf("Dobro = %d\n", dobro);
    printf("Triplo = %d\n", triplo);
    printf("Quadrado = %d\n", quadrado);
    printf("Cubo = %d\n", cubo);
    printf("Raiz quadrada = %d\n", raiz_quadrada);
}