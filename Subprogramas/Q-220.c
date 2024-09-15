#include <stdio.h>
#include <conio.h>

/*220. Escreva um programa que leia o peso e a altura de uma pessoa e determine o seu 
índice de massa corporal, que deve ser calculado através de um subprograma.*/

float imc(float peso, float altura){
	float val_imc = peso/(altura*altura);
	return(val_imc);
}

void main(){
	float peso, altura;
	printf("Informe seu peso e altura: ");
	scanf("%f%f", &peso, &altura);
	float valor_imc = imc(peso, altura);
	printf("O indicie de massa corporea(imc) eh de: %.2f", valor_imc);
	
	getch();
}