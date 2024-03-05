#include <stdio.h>
#include <conio.h>

    /*36. Escreva um programa que leia dois números inteiros e os armazene em duas variáveis a e b. Após a leitura, o programa deve permutar os valores armazenados nas duas variáveis. O programa deve imprimir os valores das duas variáveis antes e após a permutação.*/

void main(){
	int A, B;
	printf("Informe dois numeros inteiros: ");
	scanf("%d%d", &A, &B);
	printf("Numeros antes da permutacao: %d, %d\n", A, B);
    //Criando variáveis para fazer a troca
	int A1 = A;
	int B1 = B;
    //Fazendo a troca de acordo com as variáveis anteriores
	A = B1;
	B = A1;
	printf("Numeros apos a permutacao: %d, %d", A, B);
	
	getch();
}