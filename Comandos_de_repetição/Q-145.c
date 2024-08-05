#include <stdio.h>
#include <conio.h>

/*145. Escreva um programa que leia um número inteiro N e, a seguir leia vários números inteiros. O processo de leitura deve ser encerrado quando a soma dos números 
digitados pelo usuário (excluindo-se o valor de N) for superior ao valor de N.
*/

void main(){
    int n, soma=0, num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    do{
        printf("Informe mais um numero inteiro: ");
        scanf("%d", &num);
        soma = soma + num;
    }while(soma<=n);
    
    printf("valor da soma: %d", soma);

}