#include <stdio.h>

    /*110) Escreva um programa que leia um número natural N e calcule o seu fatorial.*/

void main(){
    int num, k, fatorial=1;
    printf("Informe um numero natural: ");
    scanf("%d", &num);
    for(k=num; k>=1; k--){
        fatorial = fatorial * k;
    }
    printf("Fatorial de %d = %d ",num, fatorial);

}