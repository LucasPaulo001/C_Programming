#include <stdio.h>

    /*109) Escreva um programa que leia dois números inteiros M e N e um número inteiro X e imprima todos os divisores exatos de X existentes no intervalo [M, N].*/

void main(){
    int num1, num2, x, k;
    printf("Inprimoa dois numeros inteiros: ");
    scanf("%d%d", &num1, &num2);
    printf("Agora imprima outro numero inteiro: ");
    scanf("%d", &x);
    for(k=num1; k<=num2; k++){
        if(x%k==0){
            printf("%d ", k);
        }
    }

}