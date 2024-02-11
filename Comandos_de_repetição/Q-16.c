#include <stdio.h>

    /*114) Escreva um programa que leia dois números inteiros M e N e calcule o valor de MN. A potenciação deve ser calculada através de um comando de repetição, sem a utilização de qualquer função oferecida pela linguagem de programação. */

void main(){
    int num1, num2, k, mult=1;
    printf("Informe dois numeros inteiros: ");
    scanf("%d%d", &num1, &num2);
    if(num1<num2){
        for(k=1; k<=num2; k++){ 
            mult = mult * num1;
        }
        printf("%d elevado a %d = %d ", num1, num2, mult);
    }else if(num1>num2){
        for(k=1; k<=num2; k++){
            mult = mult * num1;
        }
        printf("%d elevado a %d = %d ", num1, num2, mult);
    }
}