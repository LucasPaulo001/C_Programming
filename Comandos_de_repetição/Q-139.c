#include <stdio.h>
#include <conio.h>

/*139. Escreva um programa que leia um número inteiro N e um número inteiro K e
identifique o k-ésimo algarismo (da direita para a esquerda) do número N. Caso o
valor de k seja maior do que a quantidade de algarismos de N, a resposta do
programa deve ser 0.*/

void main(){
    int n, quant = 0, alg, k, k_esimo = 0;
    printf("Informe dois numero inteiro [numero, pos. algarismo]: ");
    scanf("%d%d", &n, &alg); // 250
    int aux = n;
    while(n>0){
        n/=10;
        quant++;
        //printf("%d", quant);
        if (alg > quant){
            printf("0");
        }
        else{
            for(k=0/*1*/; k<alg; k++){
                aux/=10;
                k_esimo = aux%10;//5
            }
            printf("%d", k_esimo);
        }
    }
    
    getch();
}