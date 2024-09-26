#include <stdio.h>
#include <conio.h>

/*265. Escreva um subprograma recursivo que receba como entrada um número inteiro N 
positivo e calcule o enésimo termo da série de Fibonacci.
*/

int fibonacci(int n){
    if(n==1 || n==2){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

void main(){
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    int res = fibonacci(n);
    printf("%d", res);

    getch();
}