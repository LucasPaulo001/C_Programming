#include <stdio.h>
#include <conio.h>
const int linha=3, coluna=3;

/*185. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e 
calcule o valor da soma dos elementos de cada uma de suas linhas. 
*/

void main(){

    float matriz[linha][coluna], soma;
    int k, i, cont;
    //Lendo a matriz
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
           printf("Informe o valor que sera armazenado na matriz: ");
           scanf("%f", &matriz[k][i]);
        }
    }
    //Informando a matriz
    printf("\nMATRIZ\n");
    for(k=0; k<linha; k++){
        for(i=0; i<coluna; i++){
            printf("%.1f ", matriz[k][i]);
        }
        printf("\n");
    }
    printf("\n");
    //Somando todos os elementos das linhas
    for(k=0; k<linha; k++){
        soma=0.0;
        for(i=0; i<coluna; i++){
           if(k==0 || k==1 || k==2){
                soma=soma+matriz[k][i];
           }
        }
        printf("Soma da linha %d: %.1f\n", k+1, soma);
    }
    getch();
}