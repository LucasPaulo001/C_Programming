#include <stdio.h>
#include <conio.h>

/*261. Escreva um subprograma recursivo que receba como entrada um número inteiro e 
calcule a soma de todos os seus algarismos. */

int soma_alg(int n){
    if(n==1){
        return 1;
    }
    else{
        return n%10 + soma_alg(n/10);
    }
}

void main(){
    int n;
    printf("Informe um numenro inteiro: ");
    scanf("%d", &n);
    int res = soma_alg(n);
    printf("A soma dos algarismos de %d: %d", n, res);

    getch();
}