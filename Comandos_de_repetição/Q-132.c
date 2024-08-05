#include <stdio.h>
#include <conio.h>

/*132. Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N é o número de elementos impressos na primeira linha. No exemplo abaixo, foi 
considerado que N=5.
*****
****
***
**
*   

*/

void main(){
    int n, k, i;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    //repetição responsável por a quantidade de linhas
    for(k=n; k>=1; k--){
        //repetição responsável por a quantidade de asteriscos
        for(i=n; i>=k; i--){
            printf("*");//Note que o "i" tem que ir até o número de linhas
            //a primeira linha equivale a n numeros de asteriscos, e as demais a n-1
        }
        printf("\n");
    }
    
}