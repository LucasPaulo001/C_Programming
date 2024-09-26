#include <stdio.h>
#include <conio.h>
const int tamanho = 5;

/*268. Escreva um subprograma recursivo que receba como entrada um vetor de 10 
números inteiros e um número inteiro N entre 1 e 10 e verifique quantos números 
pares existem a partir da posição N do vetor. */

int verificar(int v[], int tam, int pos_inicial){
    if(pos_inicial >= tam){
        return 0;
    }
    else{
        if(v[pos_inicial] % 2 == 0){
            return 1 + verificar(v, tam, pos_inicial + 1);
        }
        else{
            return verificar(v, tam, pos_inicial + 1);
        }
    }
}
void main(){
    int vetor[tamanho];
    int k, n;
    for(k=0; k<tamanho; k++){
        printf("Informe o valor %d do vetor: ", k);
        scanf("%d", &vetor[k]);
    }
    printf("Informe a posicao inicial da verificacao: ");
    scanf("%d", &n);
    int res = verificar(vetor, tamanho, n);
    printf("A quantidade de pares existente a partir da posicao %d: %d", n, res);

    getch();
}