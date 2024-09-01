#include <stdio.h>
#include <conio.h>

/*(Questão de prova 2020.1) Escreva um programa em C que leia um número inteiro não negativo e calcule a quantidade mínima de bits para representar esse número na base binária. Por exemplo, o valor do número 8 em binário é 1000, então são necessários pelomenos 4 bits para representá-lo. O valor do número 47 é 101111, então são
necessários ao menos 6 bits para representá-lo.*/

void main(){
	int num, resto, quociente, bits=0;
	printf("Informe um numero inteiro: ");
	scanf("%d", &num);//10
	int numero = num;
	while(num>0){
		quociente = num/2;//0
		resto = num%2;//0 1 0 1
		bits++;// 4
		num=num/2;//0
	}
	printf("\nA quantidade de bits do numero %d em binario: %d", numero, bits);
	
	getch();
}