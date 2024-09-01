#include <stdio.h>
#include <conio.h>
const int quantidade=5;

/*166. Escreva um programa que leia dois vetores A e B de 5 números inteiros e calcule um terceiro vetor que contenha todos os elementos do vetor A que não estão presentes no vetor B. O terceiro vetor não deverá armazenar valores repetidos.

VetorA = 1 2 3 4 5 
VetorB = 1 2 6 7 8
VetorC = 3 4 5
*/
void main(){
    int vetorA[quantidade], vetorB[quantidade], vetorC[quantidade], k, repeticoes, indice=0, i;
    for(k=0; k<quantidade; k++){
        printf("Informe o valor %d do vetorA: ", k+1);
        scanf("%d", &vetorA[k]);
    }
    printf("\n");
    for(k=0; k<quantidade; k++){
        printf("Informe o valor %d do vetorB: ", k+1);
        scanf("%d", &vetorB[k]);
    }
    for(k=0; k<quantidade; k++){
        repeticoes=0;
        for(i=0; i<indice; i++){
            if(vetorA[k]==vetorC[i]){
                vetorC[i]=vetorA[k];
                repeticoes++;
            }
        }
        if(repeticoes==0){
            vetorC[indice]=vetorA[k];
            indice++;
        }
    }
    int nulo;
    for(k=0; k<quantidade; k++){
        nulo=0;
        for(i=0; i<quantidade; i++){
            if(vetorC[i]==vetorB[k]){
                vetorC[i]=0;
                nulo++;
            }
        }
        if(nulo==0){
            printf("%d ", vetorC[i]);
        }
    }

}