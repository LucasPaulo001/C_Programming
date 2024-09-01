#include <stdio.h>
#include <conio.h>
const int ordem = 3;

/*187. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
a seguir leia um número inteiro N e determine a quantidade de números pares 
existente na linha N.*/

void main(){

    float matriz[ordem][ordem];
    int k, i, n;
    //Lendo matriz
    for(k=0; k<ordem; k++){
        for(i=0; i<ordem; i++){
            printf("Informe o valor L%d:C%d: ", k, i);
            scanf("%f", &matriz[k][i]);
        }
    }
    printf("\n");
    printf("\nMATRIZ\n");
    //Informando matriz
    for(k=0; k<ordem; k++){
        for(i=0; i<ordem; i++){
            printf("%.1f ", matriz[k][i]);
        }
        printf("\n");
    }
    //Lendo número N
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    //Veroficando maior número da linha N
    int cont=0;
    for(k=0; k<ordem; k++){
        for(i=0; i<ordem; i++){
            if(k==n && (int)matriz[k][i] % 2 == 0){
                cont++;
            }
        }
    }
    //Informando quantidade de pares
    printf("\nQuantidade de pares na linha %d: %d", n, cont);

}