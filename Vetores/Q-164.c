#include <stdio.h>
#include <conio.h>
const int ordem = 5;

/*Escreva um programa que leia dois vetores A e B de 5 números inteiros cada e calcule
um terceiro vetor que contenha todos os elementos que estão presentes em pelo
menos um dos vetores lidos. O terceiro vetor não deve armazenar valores repetidos.
*/

void main(){
  int vetorA[ordem], vetorB[ordem], vetorC[ordem * 2], k, i, repeticoes, teste_valor = 0;
  for (k = 0; k < ordem; k++){
    printf("Informe o valor %d do vetorA: ", k + 1);
    scanf("%d", &vetorA[k]);
  }
  for (k = 0; k < ordem; k++){
    printf("Informe o valor %d do vetorB: ", k + 1);
    scanf("%d", &vetorB[k]);
  }
  for (k = 0; k < ordem; k++){
    repeticoes = 0;
    for (i = 0; i < teste_valor; i++){
      if (vetorA[k] == vetorC[i]){
        vetorC[i] = vetorA[k];
        repeticoes++;
      }
    }
    if (repeticoes == 0){
      vetorC[teste_valor] = vetorA[k];
      teste_valor++;
    }
  }
  printf("\n");
  for (k = 0; k < ordem; k++){
    repeticoes = 0;
    for (i = 0; i < teste_valor; i++){
      if (vetorB[k] == vetorC[i]){
        vetorC[i] == vetorB[k];
        repeticoes++;
      }
    }
    if (repeticoes == 0){
      vetorC[teste_valor] = vetorB[k];  
      teste_valor++;
    }
  }
  for (k = 0; k < teste_valor; k++){
    printf("%d ", vetorC[k]);
  }
  getch();
}