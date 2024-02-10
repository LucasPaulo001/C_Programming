#include <stdio.h>
#include <math.h>

    /*10) Escreva um programa que leia o valor dos dois catetos de um triângulo retângulo e calcule o valor da hipotenusa.*/

void main(){
	float cateto1, cateto2;
	printf("Informe os dois catetos do triangulo:");
	scanf("%f%f", &cateto1, &cateto2);
	float soma = pow (cateto1, 2) + pow (cateto2, 2);
	float raiz = sqrt (soma);
	printf("A hipotenusa do triangulo eh: %.2f.\n", raiz);
	
}