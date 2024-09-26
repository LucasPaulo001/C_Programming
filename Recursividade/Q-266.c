#include <stdio.h>
#include <conio.h>
const int tamanho = 5;

/*266. Escreva um subprograma recursivo que receba como entrada um vetor de 10 
números inteiros e um número inteiro N entre 1 e 10 e calcule a soma de todos os 
elementos do vetor a partir da posição N.*/

//Função recebendo o vetor, a posicão inicial e o tamanho do vetor
int soma_vet(int v[], int pos_inicial, int tam){

    //Se o valor da posição inicial for maior ou igual ao tamanho, isso quer dizer que será retornado zero para a nossa soma, pois chegou ao fim do vetor
    if(pos_inicial >= tam){
        return 0;
    }
    else{
        //O valor do vetor na posição inicial será somado com a chamada recursiva que incrementará a sua posição inicial, ou seja o valor anterior somado ao valor posterior da posição inicial
        return v[pos_inicial] + soma_vet(v, pos_inicial + 1, tam);
    }
}
void main(){
    int vetor[tamanho];
    int k, n;
    for(k=0; k<tamanho; k++){
        printf("Informe o valor da posicao %d do vetor: ", k);
        scanf("%d", &vetor[k]);
    }
    printf("\nInforme um numero intero: ");
    scanf("%d", &n);
    int res = soma_vet(vetor, n, tamanho);
    printf("Soma a partir da posicao %d: %d", n, res);

    getch();
}