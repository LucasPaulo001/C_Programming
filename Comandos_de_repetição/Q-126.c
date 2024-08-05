#include <stdio.h>
#include <conio.h>

/*126. Escreva um programa que leia o termo inicial e a razão de uma PA e, a seguir, leia um número N e verifique se o número N pertence à progressão.*/

void main(){
    int termo_ini, razao, num, k, cont=0;
    printf("Informe o termo inicial, a razao e um numero inteiro: ");
    scanf("%d%d%d", &termo_ini, &razao, &num);
    while(termo_ini <= num){
        termo_ini = termo_ini + razao;
        printf("%d ", termo_ini);
        if(termo_ini == num){
            cont++;
        }
    }
    if(cont == 1){
        printf("\nO numero %d esta na progressao ", num);
    }
    else{
        printf("\nO numero %d nao esta na progressao ", num);
    }
    getch();
}