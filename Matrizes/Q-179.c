#include <stdio.h>
#include <conio.h>
const int linha=5, coluna=5;

/*179. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
imprima todos os elementos que estão acima e abaixo da diagonal principal.
*/

void main(){

    int matriz[linha][coluna], k, i;
    //Lendo a matriz
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            printf("Informe o valor da linha %d coluna %d: ", k, i);
            scanf("%d", &matriz[k][i]);
        }
    }
    //Informando a matriz
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            if(k!=i){//Imprimir todos os valores fora da diagonal principal
                printf("%d ", matriz[k][i]);
            }
        }
        printf("\n");
    }
    
}