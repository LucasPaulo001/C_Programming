#include <stdio.h>
#include <conio.h>

/*205. Escreva um programa que leia o valor de uma distância percorrida em km e o tempo gasto em horas e calcule a velocidade média em m/s. A conversão deve ser realizada através de um subprograma.
*/

float velocidade_media(float num1, float num2){
	float vm = num1/num2;
	return vm;
}
void main(){
	float valor_vel_media, distancia, tempo;
	printf("Informe a distancia e o tempo percorrido: ");
	scanf("%f%f", &distancia, &tempo);
	valor_vel_media = velocidade_media(distancia, tempo);
	printf("A velocidade media eh de: %.2f", valor_vel_media);
	
    getch();
}