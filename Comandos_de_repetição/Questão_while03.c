#include <stdio.h>
#include <conio.h>

    /*Dado um número positivo n, imprimir os n primeiros número ímpares.*/

void main(){
    int n, cont=0, impar=0;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    while(n>0){
       if(impar%2!=0){
        printf("%d ", impar);
        n--;
       }
       impar++;
    }
 getch();   
}