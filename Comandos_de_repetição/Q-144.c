#include <stdio.h>
#include <conio.h>

/*144. Escreva um programa que leia um número inteiro N e calcule o primeiro número 
natural cujo fatorial é maior do que N.*/

void main(){
    int n, k, n_fator=1, fator;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    //Condição: enquando n for maior que "0"
    while(n>0){
        //"fator" começa em "1" nesse ponto, pois ele será reiniciado a cada teste
        fator=1;
        //O "n_fator" do laço for, são os números em que testaremos o seu fatorial
        for(k=1; k<=n_fator; k++){
            fator = fator * k;//quando o fatorial for finalizado será armazenado na variável "fator"
        }
        //Aqui testaremos se o fator condiz com o enunciado, (fatoral maior que o n)
        if(fator>n){
            printf("O primeiro numero com fatorial maior que %d: %d! \n",n, n_fator);
            printf("Pois o fatorial desse numero foi: %d ", fator);

            n-=n;//quando o número for encontrado o n será atribuído a n - n, assim ficando como resultado "0" e finalizando o while
        }
        n_fator++;//Se o n_fator não for um número que satisfaça o que a questão pede, nesse ponto ele será incrementado em +1 para ser testado novamente.
    }

    getch();
}