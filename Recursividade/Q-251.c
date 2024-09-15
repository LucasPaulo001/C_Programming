#include <stdio.h>
#include <conio.h>

/*251. Escreva um subprograma recursivo que receba como entrada um número inteiro não 
negativo e calcule o seu fatorial.*/

int fatorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n * fatorial(n-1);
}

void main(){
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    int res = fatorial(n);
    printf("%d ", res);

    getch();
}