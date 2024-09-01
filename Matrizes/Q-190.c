#include <stdio.h>
#include <conio.h>
const int ordem = 3;

/*190. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
verifique quantas linhas nulas existem na matriz. */

void main(){

    float matriz[ordem][ordem];
    int k, i;
    for(k=0; k<ordem; k++){
        for(i=0; i<ordem; i++){
            printf("Informe o valor da L%d:C%d: ", k, i);
            scanf("%f", &matriz[k][i]);
        }
    }
    printf("\n\nMATRIZ\n\n");
    for(k=0; k<ordem; k++){
        for(i=0; i<ordem; i++){
            printf("%.1f ", matriz[k][i]);
        }
        printf("\n");
    }
    int valor_nulo, linha_nula=0;
    for(k=0; k<ordem; k++){
        valor_nulo=0;
        for(i=0; i<ordem; i++){
            if(matriz[k][i]==0){
                valor_nulo++;
            }
        }
        if(valor_nulo==ordem){
            linha_nula++;
        }
    }
    printf("Quantidade de linhas nulas: %d", linha_nula);
    
    getch();

}