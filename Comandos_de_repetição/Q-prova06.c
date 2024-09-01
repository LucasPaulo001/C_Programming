#include <stdio.h>
#include <conio.h>

/*. (Questão de prova 2024.1)Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N é o número de elementos impressos na primeira linha. No exemplo abaixo, foi 
considerado que N=5.
*****
 ****
  ***
   **
    *
*/

void main(){
    int n, k, i, j;
    printf("Informe um numero interio: ");
    scanf("%d", &n);
    for(k=0; k<n; k++){
        for(j=0; j<k; j++){
            printf(" ");
        }
        for(i=k; i<n; i++){
            printf("*");
        }
        printf("\n");
    }
}
