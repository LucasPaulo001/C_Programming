#include <stdio.h>

    /*9) Escreva um programa que leia o valor de uma distância percorrida em km e o tempo 
    gasto em horas e calcule a velocidade média em m/s.*/

void main(){
	float distancia, tempo;
	printf("Informe a distancia percorrida em KM: ");
	scanf("%f", &distancia);
	printf("Informe o tempo gasto em horas: ");
	scanf("%f", &tempo);
	float vm = distancia / tempo;
	float mps = vm / 3.6;
	printf("A velocidade media foi de: %.2fkm/h.\n", vm);
	printf("Sendo assim a velocidade media em m/s ficara: %.2fm/s.\n", mps);
	
}