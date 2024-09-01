#include <stdio.h>
#include <conio.h>
const int tamanho=5;

void main(){

    int vetor[tamanho], k, j, aux;
    for(k=0; k<tamanho; k++){
        printf("Informe um numero inteiro: ");
        scanf("%d", &vetor[k]);
    }
    for(k=0; k<tamanho-1; k++){
        for(j=k+1; j<tamanho; j++){
            if(vetor[k]>vetor[j]){
                aux=vetor[k];
                vetor[k]=vetor[j];
                vetor[j]=aux;
            }
        }
    }
    for(k=0; k<tamanho; k++){
        printf("%d ", vetor[k]);
    }
    getch();
}
