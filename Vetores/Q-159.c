#include <stdio.h>
#include <conio.h>
const int quantidade = 10;

/*159. Escreva um programa que leia um vetor de 10 números inteiros e dois números 
inteiros M e N entre 1 e 10 e inverta os elementos que ocupam as posições M e N do 
vetor. O programa deve também imprimir o estado do vetor antes e após a inversão.
*/

void main(){
   int vetor[quantidade], k, m, n;
   //Lendo vetor de 10 números
   for(k=0; k<quantidade; k++){
        scanf("%d", &vetor[k]);
   }
   printf("\n");
   //Informando vetor antes da modificação
   for(k=0; k<quantidade; k++){
        printf("%d ", vetor[k]);
   }
   //Lendo os número M e N e fazendo a troca
   printf("Informe dois numero inteiros entre 1 e 10: ");
   scanf("%d%d", &m, &n);
   int var_aux = vetor[m-1];
   vetor[m-1] = vetor[n-1];
   vetor[n-1] = var_aux;
   //Imprimindo vetor modificado
   for(k=0; k<quantidade; k++){
        printf("%d ", vetor[k]);
   }
    getch();
}