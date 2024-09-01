#include <stdio.h>
#include <conio.h>
const int ordem = 3;

/*192. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
um número real N e gere uma terceira matriz correspondente à multiplicação da 
matriz lida por N.*/

void main(){

    int matriz[ordem][ordem], matriz2[ordem][ordem];
    int k, i, n;
    //Lendo matriz
    for(k=0; k<ordem; k++){
        for(i=0; i<ordem; i++){
            printf("Informe o valor da L%d:C%d: ", k, i);
            scanf("%d", &matriz[k][i]);
        }
    }
    //Informando matriz
    printf("\n\nMATRIZ\n\n");
    for(k=0; k<ordem; k++){
        for(i=0; i<ordem; i++){
            printf("%d ", matriz[k][i]);
        }
        printf("\n");
    }
    //Lendo número N
    printf("Informe um numero intero: ");
    scanf("%d", &n);
    //Armazenando a multiplicação dos valores por n
    for(k=0; k<ordem; k++){
        for(i=0; i<ordem; i++){
           matriz2[k][i]=matriz[k][i]*n;
        }
    }
    printf("\n\nMATRIZ MULTIPLICADA\n\n");
    //Informando matriz com as multiplicações
    for(k=0; k<ordem; k++){
        for(i=0; i<ordem; i++){
            printf("%d ", matriz2[k][i]);
        }
        printf("\n");
    }
    printf("\n");

    getch();
}