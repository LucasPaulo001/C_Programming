#include <stdio.h>

    /*7) Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a sua área.*/

int main(){
	float base;
	printf("Digite a base do triangulo:");
	scanf("%f", &base);
	
	float altura;
	printf("Digite a altura do trinangulo:");
	scanf("%f", &altura);
	
	float area;
	area = (base * altura)/2;
	
	printf("O valor da area e: %.1f\n", area);
	
	printf("Vamos calcular agora o perimetro do triangulo, informe os lados do triangulo:");
	
	float lado1, lado2, lado3;
	scanf("%f%f%f", &lado1, &lado2, &lado3);
	
	float perimetro = (lado1+ lado2 + lado3);
	printf("O perimetro do triangulo eh: %.1f.\n", perimetro);
		
}