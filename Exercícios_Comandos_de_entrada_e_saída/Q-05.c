#include <stdio.h>
const float PI = 3.14;
    /*5) Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua 
    área e o seu comprimento.*/

int main(void){
    float raio;
	printf("Informe o valor do raio:");
	scanf("%f", &raio);
	
	float area, comprimento;
	area = PI * pow(raio, 2);
	comprimento = 2 * PI * raio;
	
	printf("o valor da area da circunferencia eh: %.1f.\n", area);
	printf("o valor do comprimento da circunferencia eh: %.1f", comprimento);
	
}