#include <stdio.h>
#include <conio.h>

/*224. Escreva um programa que leia um número inteiro e determine o seu valor absoluto. O valor absoluto deve ser calculado através de um subprograma (sem usar qualquer subprograma fornecido pela linguagem de programação).*/

void absoluto(int num){
	if(num>0){
		printf("O valor absoluto de %d eh: %d",num, num*1);
	}
	else{
		printf("O valor absoluto de %d eh: %d",num, num*(-1));
	}
}
void main(){
	int num;
	printf("Informe um numero inteiro: ");
	scanf("%d", &num);
	absoluto(num);
	
	getch();
}