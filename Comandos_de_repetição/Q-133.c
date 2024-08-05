#include <stdio.h>
#include <conio.h>

/*Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N 
é o número de elementos impressos na primeira linha. No exemplo abaixo, foi 
considerado que N=5.
*
**
***
****
*****

*/

void main(){
    int n, k, i;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    for(k=1; k<=n; k++){
        for(i=1; i<=k; i++){
            printf("*");
        }
        printf("\n");
    }
}