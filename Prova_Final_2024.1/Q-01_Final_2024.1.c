#include <stdio.h>
#include <conio.h>

/*Escreva um programa em C que leia um número inteiro positivo N e determine o enésimo número primo positivo. Por exemplo, se N for igual a , a resposta deve ser o segundo número primo positivo (que é 3). Outro exemplo, caso N seja igual a 5, a resposta deve ser o quinto número primo positivo (que é 11)*/

void main(){
	int n, primo=2, div, k;
	printf("Informe um numero inteiro: ");
	scanf("%d", &n);
	while(n>0){
		div=0;
		for(k=1; k<=primo; k++){
			if(primo%k == 0){
				div++;
			}
		}
		if(div == 2){
			n--;
		}
		primo++;
	}
	printf("%d", primo-1);
	
	getch();
}