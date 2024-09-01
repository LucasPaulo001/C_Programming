#include <stdio.h>
#include <conio.h>
const int linha=5, coluna=5;

/*180. Escreva um programa que leia uma matriz quadrada de ordem 5 de números inteiros e um inteiro N e verifique quantas vezes o número N aparece dentro da matriz. */

void main(){

    int matriz[linha][coluna];
    int k, i, n, cont=0;
    //Lendo a matriz
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            printf("Informe um numero inteiro: ");
            scanf("%d", &matriz[k][i]);
        }
    }
    //Lendo número inteiro N
    printf("\nInforme um numero inteiro: ");
    scanf("%d", &n);
    //Contando quantas vezes o número n aparece no vetor
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            if(matriz[k][i]==n){
                cont++;
            }
        }
    }
    //Informando quantidade de vezes que o número n aparece na matriz
    printf("O numero %d apareceu %d vezes na matriz: ", n, cont);
}