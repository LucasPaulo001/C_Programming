#include <stdio.h>
#include <conio.h>

/*217. Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor da unidade de milhar, da centena, da dezena e da unidade. O programa deve ter 
subprogramas para calcular cada informação solicitada.*/


int unidade_milhar(int num){
	int val_unidade_milhar = num/1000*1000; 
	return(val_unidade_milhar);
}
int centena(int num){
	int val_centena = num/100%10*100;
	return(val_centena);
}
int dezena(int num){
	int val_dezena = num%100/10*10;
	return(val_dezena);
}
int unidade(int num){
	int val_unidade = num%100%10;
}

void main(){
	int num;
	printf("Informe um numero entre 1 e 9999: \n");
	scanf("%d", &num);
	if(num<1 && num>9999){
		printf("Valor nao correspondente! ");
	}
	int uni_milhar = unidade_milhar(num);
	int valor_centena = centena(num);
	int valor_dezena = dezena(num);
	int valor_unidade = unidade(num);
	printf("Unidade de milhar: %d\n", uni_milhar);
	printf("Valor centena: %d\n", valor_centena);
	printf("Valor dezena: %d\n", valor_dezena);
	printf("Valor unidade: %d\n", valor_unidade);

    getch();
}