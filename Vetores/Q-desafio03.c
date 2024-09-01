#include <stdio.h>
#include <conio.h>
const int quantidade=5;

/*Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um código inteiro e faça uma das ações abaixo:
0 – finaliza o programa;
1 – imprime o vetor na ordem do início ao fim;
2 – imprime o vetor na ordem inversa (do fim para o início).
O programa deve funcionar até que o usuário digite 0 para finalizar.*/

void main(){

    float vetor[quantidade];
    int k, n;
    do{
        for(k=0; k<quantidade; k++){
            printf("Informe um numero real: ");
            scanf("%f", &vetor[k]);
        }
        printf("Informe os numeros para as respectivas acoes: \n[0]-finalizar\n[1]-imprimir o vetor na ordem do inicio ao fim\n[2]-imprimir o vetor na ordem inversa: ");
        scanf("%d", &n);
        switch (n){
        case 1:
            for(k=0; k<quantidade; k++){
                printf("%.1f ", vetor[k]);
            }
            break;
        case 2:
            for(k=quantidade-1; k>=0; k--){
                printf("%.1f ", vetor[k]);
            }
            break;
        }
    }while(n!=0);

}