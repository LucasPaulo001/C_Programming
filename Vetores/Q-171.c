#include <stdio.h>
#include <conio.h>
const int tamanho = 5;

/*171. Escreva um programa que leia dois vetores de 5 números reais cada e calcule o 
produto escalar destes vetores.*/

void main(){

    float vetor1[tamanho], vetor2[tamanho], soma=0.0, mult[tamanho];
    int k;
    //Lendo o vetor1
    for(k=0; k<tamanho; k++){
        printf("Informe o valor %d do vetor1: ", k+1);
        scanf("%f", &vetor1[k]);
    }
    //Lendo o vetor2
    printf("\n");
    for(k=0; k<tamanho; k++){
        printf("Informe o valor %d do vetor2: ", k+1);
        scanf("%f", &vetor2[k]);
    }
    //Multiplicando os valores entre os dois vetores
    for(k=0; k<tamanho; k++){
       mult[k]=vetor1[k]*vetor2[k];
    }
    //somando os resutados das multiplicações entre os dois vetores
    for(k=0; k<tamanho; k++){
        soma = soma + mult[k];
    }
    printf("O produto escalar entre os vetores eh: %.2f", soma);

}