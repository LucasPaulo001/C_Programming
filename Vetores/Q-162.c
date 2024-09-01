#include <stdio.h>
#include <conio.h>

/*162. Escreva um programa que leia um número inteiro entre 0 e 255 e calcule o seu valor correspondente em binário.*/

void main(){
    int k, num, resto=0, quantidade=0;

    //Repetição para que permita apenas numeros entre 0 e 255 obs: esse programa pode calcular qualquer numero binário, a repetição foi inserida apenas para cumprir o que o enunciado pede
    do{
        printf("Informe um numero entre 0 e 255: ");
        scanf("%d", &num);
        if(num>255){
            printf("Numero acima do limite permitido! \n");
        }
    }while(num>255);

    int numero=num;
    //repetição para pegar o tamanho de bits que o binário tem
    while(num>0){
        resto=num%2;
        num=num/2;
        quantidade++;
    }
    //Inserindo a quantidade de bits com tamanho do vetor
    int vetor[quantidade];
    for(k=0; k<quantidade; k++){
        //Identificando cada bit que o número tem e armazenando no vetor
        resto=numero%2;
        numero=numero/2;
        vetor[k]=resto;
    }
    //impriminto o número em binário
    printf("Numero especificado em binario: ");
    for(k=quantidade-1; k>=0; k--){
        printf("%d", vetor[k]);
    }
    
    getch();
}