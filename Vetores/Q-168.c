#include <stdio.h>
#include <conio.h>
const int tamanho = 5;

/*168. Escreva um programa que leia dois vetores A e B de 5 números inteiros já ordenados e gere um terceiro vetor também ordenado contendo todos os elementos dos dois vetores lidos. O terceiro vetor deve ter todos os elementos dois vetores, incluindo as repetições. */

void main(){
    int vetorA[tamanho], vetorB[tamanho], vetorC[tamanho*2], k, i, auxA, auxB;
    //Lendo vetorA
    for(k=0; k<tamanho; k++){
        printf("Informe o valor %d do vetorA: ", k+1);
        scanf("%d", &vetorA[k]);
    }
    //Ordenando o vetorA
    for(k=0; k<tamanho-1; k++){//1 2 3 4 5
        for(i=k+1; i<tamanho; i++){
            if(vetorA[k]>vetorA[i]){
                auxA=vetorA[k];
                vetorA[k]=vetorA[i];
                vetorA[i]=auxA;
            }
        }
    }
    //Armazenando o vetorA no vetorC
    for(k=0; k<tamanho; k++){
        vetorC[k]=vetorA[k];
    }
    printf("\n");
    //Lendo vetorB
    for(k=0; k<tamanho; k++){
        printf("Informe o valor %d do valorB: ", k+1);
        scanf("%d", &vetorB[k]);
    }
    //Ordenando vetorB
    for(k=0; k<tamanho-1; k++){
        for(i=k+1; i<tamanho; i++){
            if(vetorB[k]>vetorB[i]){
                auxB=vetorB[k];
                vetorB[k]=vetorB[i];
                vetorB[i]=auxB;
            }
        }
    }
    //Armazenando o vetorB no vetorC
    for(k=tamanho; k<tamanho*2; k++){
        vetorC[k]=vetorB[k-tamanho];
    }
    //Ordenando vetorC
    int auxC;
    for(k=0; k<tamanho*2; k++){
        for(i=k+1; i<tamanho*2; i++){
            if(vetorC[k]>vetorC[i]){
                auxC=vetorC[k];
                vetorC[k]=vetorC[i];
                vetorC[i]=auxC;
            }
        }
    }
    //Informando o vetorC ordenado
    for(k=0; k<tamanho*2; k++){
        printf("%d ", vetorC[k]);
    }

    getch();
}