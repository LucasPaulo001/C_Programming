#include <stdio.h>
#include <conio.h>
const int ordem = 5.0; 
/*256. Escreva um subprograma recursivo que receba como entrada uma matriz quadrada 
de ordem 5 de números reais e um número inteiro N (entre 1 e 5) e imprima os N 
primeiros números da diagonal principal.
*/

void imprimir(float matriz, int linha, int coluna, int n){

}
void main(){
    float matriz[ordem][ordem];
    int k, j;
    for(k=0; k<ordem; k++){
        for(j=0; j<ordem; j++){
            printf("Informe o valor: ");
            scanf("%d", &matriz[k][j]);
        }
    }
    imprimir(matriz, ordem, ordem, );


}