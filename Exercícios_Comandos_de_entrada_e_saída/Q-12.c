#include <stdio.h>
#include <conio.h>
const float pol_em_cm = 2.54;

    /*Escreva um programa que leia um valor em polegadas e o converta para centímetros, considerando que uma polegada equivale a 2.54 cm. */

void main(){
    int polegadas;
    printf("Informe o valor em polegadas: ");
    scanf("%d", &polegadas);
    float valor_cm = polegadas*pol_em_cm;
    printf("O valor %d em polegadas equivale a %.1fcm", polegadas, valor_cm);

    getch();
}