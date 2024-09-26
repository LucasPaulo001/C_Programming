#include <stdio.h>
#include <conio.h>
const int tamanho = 5;

/*267. Escreva um subprograma recursivo que receba como entrada um vetor de 10 
números inteiros, um número inteiro N entre 1 e 10 e um número inteiro X e 
verifique quantas vezes o número X aparece no vetor a partir da posição N. */

int verificar(int v[], int pos_inicial, int x , int tam){
    if(pos_inicial >= tam){
        return 0;
    }
    else{
        if(v[pos_inicial] == x){
            return 1 + verificar(v, pos_inicial+1, x, tam);
        }
        else{
            return verificar(v, pos_inicial+1, x, tam);
        }
    }
}
void main(){
    int vetor[tamanho];
    int k, n, x;
    for(k=0; k<tamanho; k++){
        printf("Informe o valor da posicao %d: ", k);
        scanf("%d", &vetor[k]);
    }
    printf("Informe o valor inicial da verificacao e o numero a ser verificado: ");
    scanf("%d%d", &n, &x);
    int res = verificar(vetor, n, x, tamanho);
    printf("Quantidade de vezes que o valor %d apareceu no vetor a partir da posicao %d: %d",x, n, res);

    getch();
}