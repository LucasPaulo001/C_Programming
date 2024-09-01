#include <stdio.h>
#include <conio.h>
const int linha=5, coluna=5;

/*182. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
determine o maior valor presente na diagonal principal.*/

void main(){

    float matriz[linha][coluna], maior;
    int k, i;
    //Lendo a matriz
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            printf("Informe um numero real para ser armazenado na matriz: ");
            scanf("%f", &matriz[k][i]);
        }
    }
    //Informando a matriz
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            printf("%.1f ", matriz[k][i]);
        }
        printf("\n");
    }
    printf("\n");
    //Armazenando o maior valor da diagonal principal
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            if(k==0 && i==0){
                maior=matriz[k][i];
            }
            if(k==i){
                if(maior<matriz[k][i]){
                    maior=matriz[k][i];
                }
            }
        }
    }
    //Informando o maior valor da diagonal principal
    printf("O maior valor da diagonal principal: %.1f ", maior);

}