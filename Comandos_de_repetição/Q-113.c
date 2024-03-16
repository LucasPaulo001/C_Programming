#include <stdio.h>

    /*113) Escreva um programa que leia dois números inteiros M e N e imprima todos os números primos existentes no intervalo [M, N].*/

void main(){
    int num1, num2, k, i, primos;
    printf("Informe dois numeros inteiros: ");
    scanf("%d%d", &num1, &num2);
    for(k=num1; k<=num2; k++){
        primos=0;
        for(i=1; i<=k; i++){
            if(k%i==0){
                primos++;
            }
        }
        if(primos==2){
            printf("%d ", k);
        }
    }
}