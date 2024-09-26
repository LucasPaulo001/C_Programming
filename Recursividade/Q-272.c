#include <stdio.h>
#include <conio.h>

/*272. Escreva um subprograma recursivo que receba como entrada um número inteiro n e um número inteiro positivo k e identifique o k-ésimo dígito do número n (da direita para a esquerda). Por exemplo, se n for 1957 e k for igual a 3, o resultado do subprograma deve ser o número 9.*/

int verificar(int n/*1957*/, int k/*2*/){
    if(k == 0){
        return 0;
    }
    else{
        if(k > 0){
            return verificar(n%10, k);
        }
    }
}
void main(){
    int n, k;
    printf("Informe um numero inteiro e o numero referente a posicao do seu digito: ");
    scanf("%d%d", &n, &k);
    int res = verificar(n, k);
    printf("%d", res);

    getch();
}