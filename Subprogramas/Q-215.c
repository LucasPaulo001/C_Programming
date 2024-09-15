#include <stdio.h>
#include <conio.h>
const float distancia_por_litro=14.00;

/*215. O carro de João consegue percorrer em média 14 km consumindo 1 litro de 
combustível. Escreva um programa que leia o valor da distância que João vai 
percorrer durante uma viagem e o preço atual de um litro de combustível e calcule 
quanto ele deverá gastar com combustível durante a viagem. O cálculo deve ser 
realizado através de um subprograma.*/

int preco(int distancia, int preco_combustivel){
	int consumo = distancia/distancia_por_litro; 
	int val_preco_combustivel = consumo*preco_combustivel;
	return(val_preco_combustivel);
}

void main(){
	int distancia;
	int preco_combustivel;
	printf("Informe a distancia a ser percorrida: ");
	scanf("%d", &distancia);
	printf("Informe o preco do litro/combustivel: ");
	scanf("%d", &preco_combustivel);
	int valor_preco_comb = preco(distancia, preco_combustivel);
	printf("O gasto com combustivel sera de: %dR$", valor_preco_comb);

    getch();
}