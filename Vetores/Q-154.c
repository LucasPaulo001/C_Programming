#include <stdio.h>
#include <conio.h>
const int quantidade = 10;
    /*Escreva um programa que leia dez números inteiros e, após finalizar a leitura, 
    imprima todos os números lidos na ordem inversa em que eles foram digitados.*/

void main(){
    int vetor[quantidade], k;
    printf("Informe dez numeros inteiros: ");
    for(k=0; k<quantidade; k++){
        scanf("%d", &vetor[k]);
    }

    /*Para imprimir na ordem inversa iniciaremos a nossa variável de controle com a quantidade - 1, pois como nosso vetor se iniciará em 0 e irá até o 9(ou seja 10 números) teremos que subtrair para que a quantidade vá só até o 9 também
    
    *Assim não armazenará nenhum número em outro tipo de memória*/

    for(k=quantidade - 1; k>=0; k--){
        printf("%d ", vetor[k]);
    }
    
    getch();
}