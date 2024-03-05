#include <stdio.h>
#include <conio.h>


    /*35. Escreva um programa que leia o valor de uma distância em metros e calcule o seu valor correspondente em quilômetros, hectômetros, decâmetros, centímetros, decímetros e milímetros.*/
    
void main(){
	float metros;
	printf("Informe o valor da distancia em metros: ");
	scanf("%f", &metros);
	float decametro = metros/10;
	float hectometro = decametro/10;
	float quilometro = hectometro/10;
	float decimetro = metros*10;
	float centimetro = decimetro*10; 
	float milimetro = centimetro*10;
	printf("Correspondente em quilometros: %.3f\n", quilometro);
	printf("Correspondente em hectometros: %.2f\n", hectometro);
	printf("Correspondente em decametros: %.1f\n", decametro);
	printf("Correspondete em decimetros: %.0f\n", decimetro);
	printf("Correspondente em centimetros: %.0f\n", centimetro);
	printf("Correspondente em milimetros: %.0f\n", milimetro);
	
    getch();
}