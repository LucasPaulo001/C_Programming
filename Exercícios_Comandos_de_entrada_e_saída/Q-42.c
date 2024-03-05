#include <stdio.h>
#include <conio.h>


    /*42. Escreva um programa que leia o peso e a altura de uma pessoa e determine o seu índice de massa corporal.*/

void main(){
    float peso, altura;
    printf("Informe o peso e a altura: ");
    scanf("%f%f", &peso, &altura);
    float imc;
    imc = peso/(altura*altura);
    printf("IMC: %.2f", imc);

    getch();
}