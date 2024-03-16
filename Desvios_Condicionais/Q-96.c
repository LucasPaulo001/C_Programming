#include <stdio.h>
#include <conio.h>


/*96. Escreva um programa que leia cinco números inteiros e determine o segundo maior 
número digitado pelo usuário e a ordem em que o mesmo foi digitado. */

void main(){
    int n1, n2, n3, n4, n5, maior_num;
    printf("Informe cinco numeros inteiros: ");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
    if(n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5){
        maior_num = n1;
    }
    else if(n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5){
        maior_num = n2;
    }
    else if(n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5){
        maior_num = n3;
    }
    else if(n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5){
        maior_num = n4;
    }
    else{
        maior_num = n5;
    }

    printf("Imprimindo o segundo maior numero: \n");

    if((maior_num == n1) && n2 < n1 && n2 > n3 && n2 > n4 && n2 > n5){
        printf("Segundo maior numero: %d", n2);
    }
    else if((maior_num == n2) && n1 < n2 && n1 > n3 && n1 > n4 && n1 > n5){
        printf("Segundo maior numero: %d", n1);
    }
    else if((maior_num == n3) && n4 < n3 && n4 > n1 && n4 > n2 && n4 > n5){
        printf("Segundo maior numero: %d", n4);
    }
    else if((maior_num == n4) && n3 < n4 && n3 > n1 && n3 > n2 && n3 > n5){
        printf("Segundo maior numero: %d", n3);
    }
    else { 
        printf("Segundo maior numero: %d", n5);
    }
   
   getch();
}