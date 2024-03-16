#include <stdio.h>

    /*106) Escreva um programa que leia dois números inteiros M e N e calcule a média 
    aritmética dos números do intervalo [M, N].*/

void main(){
    int num1, num2, k, soma=0, media, cont=0;
    printf("Informe dois numeros inteiros: ");
    scanf("%d%d", &num1, &num2);
    for(k=num1; k<=num2; k++){
        soma = soma + k;
        cont++;
    }
    media = soma/cont;
    printf("Media aritmetica: %d", media);

}