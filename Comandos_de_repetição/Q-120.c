#include <stdio.h>
#include <conio.h>

/*120) Escreva um programa que leia um número inteiro positivo N e imprima a maior 
quantidade possível de números inteiros positivos de forma que a soma de todos os 
números impressos seja menor ou igual a N.
*/

void main(){
	int n, k=1, soma=0, soma_k=0;
	printf("Informe um numero inteiro positivo: ");
	scanf("%d", &n);
	while(k<=n){
		soma=soma+k;//imprime a soma dos números
		if(soma<=n){//condição para ir somando os números até seu resultado chegar a n
			printf("%d ", k);
			soma_k=soma_k+k;
		}
		k++;
	}
	printf("\nSoma dos numeros = %d ", soma_k);
	
	getch();
}