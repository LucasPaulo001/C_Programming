#include <stdio.h>
#include <conio.h>

/*216. Escreva um programa que leia o valor de uma distância em metros e calcule o seu valor correspondente em quilômetros, hectômetros, decâmetros, centímetros, 
decímetros e milímetros. O programa deve ter um subprograma para converter para 
cada unidade de medida.
*/

float quilometro(float metros){
	float val_km = metros/1000;
	return(val_km);
}
float hectometro(float metros){
	float val_hm = metros/100;
	return(val_hm);
}
float decametro(float metros){
	float val_dam = metros/10;
	return(val_dam);
}
float centimetro(float metros){
	float val_cm = metros*100;
	return(val_cm);
}
float decimetro(float metros){
	float val_dm = metros*10;
	return(val_dm);
}
float milimetro(float metros){
	float val_mm = metros*1000;
	return(val_mm);
}
void main(){
	float metros;
	
	printf("Informe a distancia em metros: ");
	scanf("%f", &metros);
	
	float valor_km = quilometro(metros);
	float valor_hm = hectometro(metros);
	float valor_dam = decametro(metros);
	float valor_cm = centimetro(metros);
	float valor_dm = decimetro(metros);
	float valor_mm = milimetro(metros);
	
	printf("Valor em Km: %.2fKm \n", valor_km);
	printf("Valor em Hm: %.2fHm \n", valor_hm);
	printf("Valor em Dam: %.2fDam \n", valor_dam);
	printf("Valor em Cm: %.2fCm \n", valor_cm);
	printf("Valor em Dm: %.2fDm \n", valor_dm);
	printf("Valor em Mm: %.2fMm \n", valor_mm);	

    getch();
}