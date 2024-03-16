#include <stdio.h>

    /*61) Escreva um programa que leia um número inteiro e determine o seu valor absoluto. O valor absoluto deve ser calculado sem o uso de qualquer função oferecida pela 
    linguagem.*/

void main(){
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    if(num<0){
       int valor_abs = num * (-1);  /* -->Transformando números negativos em positivos<--*/
       printf("Valor absoluto: %d", valor_abs); /*Informando o valor depois da transformação*/

    }else if(num>=0){
        printf("Valor absoluto: %d", num);/*Imprimindo o valor sem a necessidade de modificar seu sinal*/
    }

}