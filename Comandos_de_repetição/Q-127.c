#include <stdio.h>
#include <conio.h>
#include <string.h>

    /*127. Escreva um programa que leia várias palavras e, para cada palavra lida, determine o seu número de letras. O processamento deverá ser encerrado quando forem lidas duas palavras de cinco letras.*/

void main(){

    char palavra [50];
    int quantidade, cont=0;
    do{
        printf("Informe uma palavra: ");
        scanf(" %s", palavra);
        //pegando a quantidade de letras que tem em cada palavra escrita pelo usuário
        quantidade = strlen(palavra);
        //condição para que o contador seja incrementado
        if(quantidade == 5){
            cont++;
        }
        //condição de parada será quando a quantidade de palavras com 5 letras for menor que dois
    }while(cont<2);

}