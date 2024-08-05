#include <stdio.h>
#include <conio.h>

/*118. Escreva um programa que leia um número N e imprima os N primeiros números 
primos positivos.*/

void main(){
    int n, num=2;// a variável num vai começar com "2", pois é o primeiro primo
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    while(n>0){
    int k, cont=0;
    for(k=1; k<=num; k++){//nesse comando vamos testar quantos divisores tem o "num"
        if(num%k==0){
            cont++;//como 1 e 2 são divisores exatos do "num", que é 2, logo o 2 é primo
        }
    }   
       if(cont==2){//aqui testamos o número pela quantidade de divisores
            printf("%d \n", num);
            n--;//aqui decrementamos o n, número informado pelo usuário, para que a condição do while seja satisfeita
       }
       num++;//aqui incrementamos 1 ao num que começa com 2

       /*por fim, os nossos números primos informados são na variável "num", o número informado pelo usuário "n" é apenas a quantidade de vezes que o programa vai nos informar os números primos*/
    }
}