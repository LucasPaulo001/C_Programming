#include <stdio.h>
#include <conio.h>
const int ordem = 3;

/*188. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
a seguir leia um número inteiro N e determine a quantidade de números primos na 
coluna N. */

int main(){

    float matriz[ordem][ordem];
    int k, i, n;
    for(k=0; k<ordem; k++){
        for(i=0; i<ordem; i++){
            printf("Informe o valor da L%d:C%d: ", k, i);
            scanf("%f", &matriz[k][i]);
        }
    }
    printf("\n");
    for(k=0; k<ordem; k++){
        for(i=0; i<ordem; i++){
            printf("%.1f ", matriz[k][i]);
        }
        printf("\n");
    }
    printf("Informe o numero da coluna que quer verificar se tem primos: ");
    scanf("%d", &n);
    int divisores, j, primos=0;
    for(k=0; k<ordem; k++){
        for(i=0; i<ordem; i++){
            if(i==n){
                divisores=0;
                for(j=1; j<matriz[k][i]; j++){
                    if((int)matriz[k][i]%2==0){
                        divisores++;
                    }
                }
                if(divisores==2){
                    primos++;
                }
            }
        }
    }
    printf("Quantidade de primos na L%d:C%d: %d", k, i, primos);
    return 0;
}