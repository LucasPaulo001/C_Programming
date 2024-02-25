#include <stdio.h>
#include <conio.h>


    /*Dado um número positivo n. Calcular a soma dos n primeiros números.*/

void main(){
    int n, cont=0, soma=0;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    while(cont<n){
        cont++;
        soma = soma + cont;
    }
    printf("Soma = %d ", soma);

    getch();
}