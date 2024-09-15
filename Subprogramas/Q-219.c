#include <stdio.h>
#include <conio.h>

/*219. Escreva um programa que leia o valor total que um cliente consumiu em um 
restaurante e determine o valor final da sua conta, considerando que o restaurante 
cobra uma taxa de serviço de 10 % e uma taxa de couvert artístico de R$ 10,00. A 
conta deve ser calculada através de um subprograma.
*/

float valor_final(float valor){
	float taxa_serv = valor + (valor*0.1);
	float couvert_art = taxa_serv + 10;
	return(couvert_art);
}

void main(){
	float valor;
	printf("Informe o valor total que o cliente consumiu: ");
	scanf("%f", &valor);
	float valor_total = valor_final(valor);
    
	getch();
}