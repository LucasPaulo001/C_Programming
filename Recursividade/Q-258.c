#include <stdio.h>
#include <conio.h>

/*258. Escreva um subprograma recursivo que receba como entrada um valor em decimal e imprima o seu valor correspondente em binário.
*/

void bin(int n){
    if(n == 0){
        printf("0");
    }
    else if(n == 1){
        printf("1");
    }
    else{
        bin(n/2);
        printf("%d", n%2);
    }
}
void main(){
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    bin(n);

    getch();
}