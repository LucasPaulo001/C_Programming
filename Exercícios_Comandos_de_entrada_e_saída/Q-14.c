#include <stdio.h>
#include <conio.h>
#include <string.h>

    /*Escreva um programa que leia uma palavra e calcule o seu comprimento.*/

void main(){
    char palavra[20];
    int tamanho;
    printf("Informe uma palavra: ");
    scanf("%s", palavra);
    tamanho = strlen(palavra);
    printf("O tamanho da palavra (%s) eh: %d", palavra, tamanho);

    getch();
}