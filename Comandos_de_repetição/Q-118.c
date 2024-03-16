#include <stdio.h>
#include <conio.h>

/*118. Escreva um programa que leia um número N e imprima os N primeiros números 
primos positivos.*/

void main(){
    int n, num=2;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    while(n>0){
    int k, cont=0;
    for(k=1; k<=num; k++){
        if(num%k==0){
            cont++;
        }
    }   
       if(cont==2){
            printf("%d \n", num);
            n--;
       }
       num++;
    }
}