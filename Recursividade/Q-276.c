#include <stdio.h>
#include <conio.h>

/*276. Escreva um subprograma recursivo que receba como entrada um número inteiro N 
não negativo e imprima a saída mostrada abaixo. O exemplo abaixo considera que N é 
igual a 5.
*****
****
***
**
*
*/

void imprimir(int n){
    if(n==1){
        printf("*");
    }
    else{
        int k;
        for(k=n; k>0; k--){
            printf("*");
        }
        printf("\n");
        imprimir(n-1);
    }
}
void main(){
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    imprimir(n);

    getch();
}