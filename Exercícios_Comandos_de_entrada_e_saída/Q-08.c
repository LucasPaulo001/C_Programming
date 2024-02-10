#include <stdio.h>

    /*8) Escreva um programa que leia o valor de uma temperatura em Celsius e calcule o seu 
    valor correspondente em Fahrenheit e em Kelvin.*/

void main(){
	float celsius;
	printf("Informe o valor da temperatura em celsius:");
	scanf("%f", &celsius);
	float convercaoF = (celsius * 1.8) + 32;
	float convercaoK = celsius + 273.15;
	printf("O valor de celsius para Fahrenheit da temperatura informada eh: %.1fF.\n", convercaoF);
	printf("O valor de celsius para Kelvin da temperatura informada eh: %.1fK.\n", convercaoK);
	
}