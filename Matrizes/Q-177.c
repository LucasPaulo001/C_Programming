#include <stdio.h>
#include <conio.h>
const int linha=5, coluna=5;

/*177. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
calcule a sua matriz transposta.
*/

void main(){

    int matriz[linha][coluna];
    int k, i;
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            printf("Informe um numero inteiro: ");
            scanf("%d", &matriz[k][i]);
        }
    }
    printf("Matriz:\n");
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            printf("%3d", matriz[k][i]);
        }
        printf("\n");
    }
    printf("Diagonal principal da matriz:\n");
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            if(k==i){
                printf("%3d ", matriz[k][i]);
            }
        }
        printf("\n");
    }
    getch();

}