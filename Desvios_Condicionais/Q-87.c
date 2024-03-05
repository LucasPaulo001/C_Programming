#include <stdio.h>
#include <conio.h>


/*87. Escreva um programa que leia um caractere correspondente ao estado civil de uma 
pessoa e imprima o estado civil informado por extenso. As opções para o estado civil 
são: S (solteiro), C (casado), D (divorciado) e V (viúvo).*/

void main(){
	char estado;
	printf("Informe o estado civil (c(casado(a)), s(solteiro(a)), v(viuvo(a))): ");
	scanf("%s", &estado);
	switch(estado){
		case 'c': 
		printf("casado(a)");
		break;
		
		case 's': 
		printf("solteiro(a)");
		break;
		
		case 'd':
		printf("divorciado(a)");
		break;
		
		case 'v': 
		printf("viuvo(a):");
		break;
	}
	
    getch();
}