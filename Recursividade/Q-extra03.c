#include <stdio.h>
#include <conio.h>
const int tamanho = 10;

/*Escreva um subprograma recursivo que receba como parâmetro um vetor de 10 números inteiros e calcule a média aritmética dos números pares*/

int media_pares(int v[], int tam, int quant_pares, int soma){
    if(tam == 0){
        return soma/quant_pares;
    }
    else{
        if(v[tam - 1] % 2 == 0){
            return media_pares(v, tam-1, quant_pares + 1, soma + v[tam-1]);
        }
        else{
            return media_pares(v, tam-1, quant_pares, soma);
        }
    }
}
void main(){
    int vetor[tamanho];
    int k;
    for(k=0; k<tamanho; k++){
        printf("Informe o valor %d do vetor: ", k);
        scanf("%d", &vetor[k]);
    }
    int res = media_pares(vetor, tamanho, 0, 0);
    printf("%d", res);
    getch();
}