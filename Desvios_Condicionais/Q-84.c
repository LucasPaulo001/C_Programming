#include <stdio.h>
#include <conio.h>

/*84. Escreva um programa que leia o peso e a altura de uma pessoa e verifique se ela estádentro da faixa de peso adequada, ou se está abaixo ou acima do peso. Caso a pessoaesteja fora do peso adequado o programa deve informar quantos Kg ela deve ganhar
ou perder para ficar dentro da faixa adequada. Para resolver este programa, considere
que o IMC ideal para uma pessoa deve estar entre 18 e 25. */

void main(){
	float peso, altura;
	printf("Informe o peso: ");
	scanf("%f", &peso);
	printf("Informe a altura: ");
	scanf("%f", &altura);
	float imc = peso/(altura * altura);
    
	if(imc >= 18 && imc<=25){
		printf("Esta no peso ideal! ");
	}
	else if(imc < 18){
		float peso_min_ideal = 18 * altura * altura;
		float peso_ideal = peso_min_ideal - peso;
		printf("Voce esta abaixo do peso, tera que ganhar %.2fkg para atingir o seu peso minimo ideal", peso_ideal);
	}
	else if(imc > 25){
		float peso_max_ideal = 25 * altura * altura;
		float peso_ideal = peso_max_ideal - peso;
		printf("Voce esta acima do peso, tera que perder %.2fkg para atingir o seu peso maximo ideal", peso_ideal);
	}
	
	getch();
}