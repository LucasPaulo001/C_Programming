#include <stdio.h>
#include <conio.h>
const int tamanho = 10;

/*172. Escreva um programa que leia um vetor de 10 números inteiros e, a seguir, leia um número inteiro N entre 1 e 10 e verifique quantas sequências de tamanho N formada 
por elementos consecutivos existem no vetor, de forma que todos os elementos da 
sequência estejam ordenados em ordem crescente. Por exemplo, no vetor (0, 6, 8, 
10, 4, 3, 5, 9, 2, 15), podemos encontrar três sequencias de três (N=3) elementos (0, 
6, 8), (6, 8, 10), (3, 5, 9) em ordem crescente.
*/

void main(){

    int vetor[tamanho], k, n, i, aux;
    //Lendo o vetor
    for(k=0; k<tamanho; k++){
        printf("Informe o valor %d do vetor: ", k+1);
        scanf("%d", &vetor[k]);
    }
    //Ordenando o vetor
    for(k=0; k<tamanho-1; k++){
        for(i=k+1; i<tamanho; i++){
            if(vetor[k]>vetor[i]){
                aux=vetor[k];
                vetor[k]=vetor[i];
                vetor[i]=aux;
            }
        }
    }
    //Lendo o número n
    printf("Informe um numero inteiro entre 1 e 10: ");
    scanf("%d", &n);
    //Informando o vetor ordenado com os intervalos de n
    int cont;
        cont=0;
        while(cont<n){
            for(k=0/*0*/; k<tamanho; k++){
                printf("(");
                printf("%d", vetor[k]);//1 2
                printf(")");
                cont++;
            }
        }   
}