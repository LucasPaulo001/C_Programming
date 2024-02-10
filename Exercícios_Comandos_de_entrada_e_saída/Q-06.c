#include <stdio.h>

    /*6) Escreva um programa que leia um número inteiro e informe o seu antecessor e o seu 
    sucessor.*/

int main(void){
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    int antecessor = num - 1;
    int sucessor = num + 1;
    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

}