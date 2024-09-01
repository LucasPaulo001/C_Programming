#include <stdio.h>
#include <conio.h>

/*(Questão de prova 2021.1) Escreva um programa em C que leia um número inteiro positivo N e imprima o enésimo número primeiro positivo.*/

void main(){
	int n, num=2, k;
	printf("Informe um numero inteiro positivo: ");
	scanf("%d", &n);
	while(n>0){
		int divisor=0;
		for(k=1; k<=num; k++){
			if(num%k==0){
				divisor++;
			}
		}
		if(divisor==2){
			if(n==1){
				printf("%d", num);
			}
			n--;
		}
		num++;
	}
	getch();
	
}