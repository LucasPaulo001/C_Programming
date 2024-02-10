#include <stdio.h>

    /*65) Escreva um programa que leia a idade de uma pessoa e verifique se ela é criança (0-12 anos), adolescente (13-17 anos), adulta (18-59) ou idosa (acima de 60 anos).*/

void main(){
    int idade;
    printf("Informe a idade: ");
    scanf("%d", &idade);
    if(idade<=12){
        printf("Crianca");
    }else if(idade<=17){
        printf("Adolescente");
    }else{
        printf("Adulto(a)");
    }
}