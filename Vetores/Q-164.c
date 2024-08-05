#include <stdio.h>
#include <conio.h>
const int quantidade = 5;

/*164. Escreva um programa que leia dois vetores A e B de 5 números inteiros cada e calcule um terceiro vetor que contenha todos os elementos que estão presentes em pelo 
menos um dos vetores lidos. O terceiro vetor não deve armazenar valores repetidos.
*/

void main(){
    int vetor1[quantidade], vetor2[quantidade], vetor3[10], k;
    //lendo primeiro vetor
    for(k=0; k<quantidade; k++){
        printf("Informe um numeor inteiro [vetor1]: ");
        scanf("%d", &vetor1[k]);
    }
    //lendo segundo vetor
    printf("\n");
    for(k=0; k<quantidade; k++){
        printf("Informe um numero inteiro [vetor2]: ");
        scanf("%d", &vetor2[k]);
    }
    
    printf("\n");
    //calculando terceiro vetor
    for(k=0; k<quantidade; k++){
        if(vetor1[k]==vetor2[k]){
            vetor3[k] = vetor1[k];
            printf("%d ", vetor3[k]);
        }
    }
    
    getch();
}