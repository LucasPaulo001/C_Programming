#include <stdio.h>
#include <conio.h>

/*225. Escreva um programa que leia dois números inteiros M e N e verifique se N é 
múltiplo de M. Esta verificação deve ser realizada através de um subprograma.
*/

void multiplo(int m, int n){
	if(n%m==0){
		printf("O %d eh multiplo de %d", n, m);
	}
	else{
		printf("Os numeros nao sao multiplos");
	}
}
void main(){
	int num1, num2;
	printf("Informe dois numero inteiros: ");
	scanf("%d%d", &num1, &num2);
	multiplo(num1, num2);
}