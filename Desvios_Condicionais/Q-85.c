#include <stdio.h>
#include <conio.h>


/*85. Escreva um programa que leia dois operandos inteiros e um operador (+, -, *, /) e aplique o operador lido aos dois operandos, na ordem em que os mesmos foram 
digitados.*/

void main(){
    int opr1, opr2, soma, sub;
    char operando;
    printf("Informe dois operandos inteiros: ");
    scanf("%d%d", &opr1, &opr2);
    printf("Informe um operador(+, -, *, /): ");
    scanf(" %c", &operando);
    if(operando == '+'){
        soma = opr1 + opr2;
        printf("%d", soma);
    }
    else if(operando=='-'){
        sub = opr1 - opr2;
        printf("%d", sub);
    }
    else if(operando=='*'){
        int mult = opr1 * opr2;
        printf("%d", mult);
    }
    else if(operando=='/'){
        int div = opr1 / opr2;
        printf("%d", div);
    }
    else{
        printf("Informe um dos caracteres sugeridos!!");
    }
    
    getch();
}