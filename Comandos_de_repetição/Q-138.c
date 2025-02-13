#include <stdio.h>
#include <conio.h>

/*138. Escreva um programa que leia um número inteiro positivo e calcule a soma de todos os seus algarismos.
*/

void main(){
    int n, soma=0;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    while(n>0){
        soma = soma + n%10;
        n/=10;
    }
    printf("%d", soma);

    getch();
}