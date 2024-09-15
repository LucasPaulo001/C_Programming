#include <stdio.h>
#include <conio.h>

/*221. Escreva um programa que leia um número inteiro entre 0 e 999 e calcule o seu 
reverso. Você deve sempre considerar que o número lido tem três algarismos. Desta 
forma, o reverso de 195 deve ser 591, o de 768 deve ser 867, de 3 deve ser 300, o de 
40 deve ser 40, o de 500 deve ser 5, e assim sucessivamente. O programa deve 
armazenar o valor do reverso em uma variável antes de exibi-lo para o usuário. O 
valor do reverso deve ser calculado através de um subprograma.
*/

int reverso(int numero){
	int val_cent = numero/100;
	int val_dez = numero%100/10;
	int val_uni = numero%10;
	int uni = val_uni*100;
	int dezen = val_dez*10;
	int cent = val_cent*1;
	int num_reverso = uni+dezen+cent;
	return(num_reverso);
}
void main(){
	int numero;
	printf("Informe um numero entre 0 e 999: ");
	scanf("%d", &numero);
	if(numero < 0 || numero > 999){
		printf("Numero nao condiz com o enunciado: ");
	}
	
	else{
		int valor_reverso = reverso(numero);
		printf("O reverso do numeros eh: %d", valor_reverso);
	}

	getch();
}