#include <stdio.h>
#include <conio.h>
#include <string.h>

/*130. Escreva um programa que leia o número de pessoas que irão participar de um evento, no qual será sorteado um prêmio, e, a seguir, leia o nome e o número do bilhete recebido por cada uma destas pessoas. O programa deve informar o nome do 
ganhador do prêmio, que é a pessoa cuja ordem de chegada é igual ao número do seu 
bilhete. Para isto, você poder supor que: a ordem de chegada de cada pessoa 
corresponde à ordem de leitura dos seus dados; sempre existe uma pessoa cujo 
número do bilhete é igual a sua ordem de chegada; este caso acontece para apenas 
uma pessoa.*/

void main(){
    int num_pessoas, k, num_bilhete;
    char nome[20], ganhador[20];
    printf("Informe o numero de pessoas que iram participar do evento: ");
    scanf("%d", &num_pessoas);
    for(k=1; k<=num_pessoas; k++){
        printf("Informe o nome da pessoa %d: ", k);
        scanf("%s", &nome);
        fflush(stdin);
        printf("Informe o numero do bilhete de pessoa %s: ", nome);
        scanf("%d", &num_bilhete);
        if(num_bilhete==k){
           strcpy(ganhador, nome);
        }
    }
    printf("\nGanhador: %s", ganhador);

}