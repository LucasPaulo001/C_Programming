#include <stdio.h>
#include <conio.h>

/*137. Escreva um programa que leia um número inteiro positivo e calcule o número de 
algarismos deste número.*/

void main(){
    int num, cont=0;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &num);
    //Se o número for apenas 0, imprime "1", pois não tem como dividir para encontrar a quantidade de algarismos
    if(num==0){
        printf("1");
    }
    //Aqui o número será percorrido de algarismo em algarismo por uma divisão repetitiva por 10, enquanto o resultado for diferente de zero.
    
    while(num!=0){
        num = num/10;
        cont++;
    }
    printf("O numero tem %d algarismos ", cont);
}