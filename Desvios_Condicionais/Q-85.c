#include <stdio.h>
#include <conio.h>


/*85. Escreva um programa que leia dois operandos inteiros e um operador (+, -, *, /) e aplique o operador lido aos dois operandos, na ordem em que os mesmos foram 
digitados.*/

void main(){
    int opr1, opr2, soma;
    char operando;
    printf("Informe dois operandos inteiros: ");
    scanf("%d%d", &opr1, &opr2);
    printf("Informe um operador(+, -, *, /): ");
    scanf("%s", &operando);
    if(operando == '+'){
        soma = opr1 + opr2;
        printf("%d",soma);
    }
    getch();
}