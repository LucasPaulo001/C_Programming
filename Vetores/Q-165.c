#include <stdio.h>
#include <conio.h>
const int quantidade = 5;
/*165. Escreva um programa que leia dois vetores A e B de 5 números inteiros e calcule um terceiro vetor 
que contenha todos os elementos que estão presentes nos dois vetores. O terceiro vetor não deverá armazenar valores repetidos.*/

void main(){

    int vetorA[quantidade], vetorB[quantidade], vetorC[quantidade], k, repeticoes, i, teste_valor=0;

    //Lendo o primeiro vetor
    for(k=0; k<quantidade; k++){
        printf("Informe o valor %d do vetorA: ", k+1);
        scanf("%d", &vetorA[k]);
    }
    printf("\n");

    //Lendo o segundo vetor
    for(k=0; k<quantidade; k++){
        printf("Informe o valor %d do vetorB: ", k+1);
        scanf("%d", &vetorB[k]);
    }
    //Armazenando o vetorA no vetorC sem repetições
    for(k=0; k<quantidade; k++){
        repeticoes=0;
        for(i=0; i<teste_valor; i++){
            if(vetorA[k]==vetorC[i]){
                vetorC[i]=vetorA[k];
                repeticoes++;
            }
        }
        if(repeticoes==0){
            vetorC[teste_valor]=vetorA[k];
            teste_valor++;
        }
    }
    printf("\n");

    //Percorrendo o vetorB, comparando com o vetorC e imprimindo as repetições entre os vetores
    for(k=0; k<quantidade; k++){
        repeticoes=0;
        for(i=0; i<teste_valor; i++){
            if(vetorB[k]==vetorC[i]){
                vetorC[i]=vetorB[k];
                repeticoes++;
            }
        }
        if(repeticoes==1){
            vetorC[teste_valor]=vetorB[k];
            teste_valor++;
            printf("%d ", vetorC[i]);
        }
    }
    getch();

}