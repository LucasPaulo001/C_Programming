#include <stdio.h>
#include <conio.h>

/*253. Escreva um subprograma recursivo que receba como entrada um número inteiro N 
positivo e provoque um salto de N linhas na tela do usuário.*/

void pular_linha(int n){
    if(n == 1){
        printf("-\n");
    }
    else{
        pular_linha(n-1);
        printf("-\n");
    }
}
void main(){
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    pular_linha(n);

    getch();
}