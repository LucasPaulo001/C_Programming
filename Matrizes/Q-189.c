#include <stdio.h>
#include <conio.h>
const int ordem = 3;

/*189. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
a seguir leia um número inteiro N entre 1 e 5 e verifique se a coluna N da matriz é 
nula.*/

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
            printf("%.1f  ", matriz[k][i]);
        }
        printf("\n");
    }
    int n, cont=0;
    printf("Informe um numero inteiro entre 1 e 5: ");
    scanf("%d", &n);
    for(k=0; k<ordem; k++){
        for(i=0; i<ordem; i++){
            if(i==n && matriz[k][i]==0){
                cont++;
            }
        }
    }
    if(cont==ordem){
        printf("Nula!");
    }
    else{
        printf("Nao eh Nula!");
    }
    
    getch();
}