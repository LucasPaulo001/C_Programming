#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>//Boblioteca onde se encontra a função "toupper", para deixar a letra em maiúsculo.

/*16. Escreva um programa que leia uma letra minúscula e imprima a sua letra maiúscula correspondente.*/

void main(){
    char letra;
    printf("Informe uma letra: ");
    scanf("%c", &letra);
    printf("Letra correspondente em maiuscula: %c ", toupper(letra));

    getch();
}