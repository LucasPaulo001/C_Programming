#include <stdio.h>
#include <conio.h>

    /*2) Escreva um programa que leia três números e seus respectivos pesos e calcule a sua 
    média ponderada.*/


 int main(void){
    float n1, n2, n3, p1, p2, p3, soma_mult_media, div_media, media_ponderada;
    printf("Informe o primeiro numero:");
	scanf("%f", &n1);
	printf("Informe o peso:");
	scanf("%f", &p1);
	printf("Informe o segundo numero:");
	scanf("%f", &n2);
	printf("Informe o peso:");
	scanf("%f", &p2);
	printf("Informe o terceiro numero:");
	scanf("%f", &n3);
	printf("Informe o peso:");
	scanf("%f", &p3);
    soma_mult_media = (n1*p1)+(n2*p2)+(n3*p3); //Somando as multiplicações entre os números e seus respectivos pesos
    div_media = soma_mult_media/(p1+p2+p3);//Dividindo o resultado obtido anteriormente e o dividindo com a soma dos pesos
    media_ponderada = div_media;//Atrobuindo o resultado anterior para a variável "media_ponderada " Obs: essa parte não é obrigatória, poderia apenas imprimir o próprio resultado da "div_media" 
    printf("Media ponderada: %.2f ", media_ponderada);

    getch();
    
}