#include <stdio.h>
#include <math.h>

	/*3) Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e o 
	seu perímetro.*/

 int main(void){
	float lado;
	printf("Informe um lado do quadrado:");
	scanf("%f", &lado);
	float area = pow (lado, 2);
	float perimetro = 4 * lado;
	printf("A area do quadrado eh: %.2f.\n", area);
	printf("O perimetro do quadrado eh: %.2f.\n", perimetro);

    return 0;
}