#include <stdio.h>
#include <conio.h>

/*207. Escreva um programa que leia um valor em polegadas e o converta para centímetros, considerando que uma polegada equivale a 2.54 cm. A conversão deve ser realizada através de um subprograma.
*/

float centimetro(float polegadas){
	float valor_centimetros = 2.54;
	float valor = polegadas*valor_centimetros;
	return valor;
}
void main(){
	float polegadas, val_centimetros;
	printf("Informe o valor em polegadas: ");
	scanf("%f", &polegadas);
	val_centimetros = centimetro(polegadas);
	printf("O valor informado de polegadas para centimetros eh: %.2fcm", val_centimetros);
	
    getch();
}