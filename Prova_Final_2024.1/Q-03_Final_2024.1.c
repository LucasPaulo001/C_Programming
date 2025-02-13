#include <stdio.h>
#include <conio.h>

/*Escreva um subprograma recursivo em C que receba como parâmetroum número inteiro positivo N e imprima a figura abaixo, na qual foi considerado que Né igual a 5.
*****
****
***
**
*
*/

void figura(int n){
    if(n==1){
        printf("*");
    }
    else{
        int k;
        for(k=0; k<n; k++){
            printf("*");
        }
        printf("\n");
        figura(n-1);
    }
}
void main(){
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    figura(n);

    getch();
}
