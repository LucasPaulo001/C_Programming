#include <stdio.h>
#include <conio.h>
#include <string.h>
const int quantidade = 3;

    /*128. Escreva um programa que leia o nome e o peso de 20 bois que participam de uma exposição e imprima o nome do boi mais leve e o nome do boi mais pesado. Para isso, suponha que todos os bois têm pesos distintos.*/

void main(){
    int k, peso, pesado=0, leve=0;
    char nome[50], nome_pesado[50], nome_leve[50];
    for(k=1; k<=quantidade; k++){
        printf("Informe o nome do boi %d: ", k);
        scanf(" %s", nome);
        printf("Informe o peso do boi %d: ", k);
        scanf("%d", &peso);
        if(k==1){//quando k for 1, o peso inicial será armazenado nas variáveis, [peso e leve]
            pesado = peso;
            leve = peso;
        }
        if(peso > pesado){
            pesado = peso;
            strcpy(nome_pesado, nome);//copia o nome do boi mais pesado para a variável nome_pesado
        }
        if(peso < leve){
            leve = peso;
            strcpy(nome_leve, nome);
        }
    }
    printf("O boi mais pesado: %s\n", nome_pesado);
    printf("O boi mais leve: %s\n", nome_leve);

}