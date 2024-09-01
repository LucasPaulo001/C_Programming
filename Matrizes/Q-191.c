#include <stdio.h>
#include <conio.h>
const int ordem = 5;

/*191. Escreva um programa que leia duas matrizes quadradas de ordem 5 de números 
reais e gere uma terceira matriz correspondente à soma das duas matrizes lidas.
*/

void main(){

    float matriz1[ordem][ordem], matriz2[ordem][ordem], matriz3[ordem][ordem];
    int k, i;
    //Lendo a primeira matrizes
    for(k=0; k<ordem; k++){
        for(i=0; i<ordem; i++){
            printf("Informe o valor da L%d:C%d: ", k, i);
            scanf("%f", &matriz1[k][i]);
        }
        printf("\n");
    }
    printf("\n---------------------------------------\n\n");
    //lendo a segunda matriz
    for(k=0; k<ordem; k++){
        for(i=0; i<ordem; i++){
            printf("Informe o valor da L%d:C%d: ", k, i);
            scanf("%f", &matriz2[k][i]);
        }
        printf("\n");
    }
    //Armazenando a soma das duas matrizes 
    for(k=0; k<ordem; k++){
        for(i=0; i<ordem; i++){
            matriz3[k][i] = matriz1[k][i] + matriz2[k][i]; 
        }
    }
    printf("\n");
    //Informando a soma
    for(k=0; k<ordem; k++){
        for(i=0; i<ordem; i++){
            printf("%.1f ", matriz3[k][i]);
        }
        printf("\n");
    }
    getch();
}