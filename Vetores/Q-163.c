#include <stdio.h>
#include <conio.h>

const int quantidade=5;

/*163. O IFPB precisa de um programa que faça a correção automática das provas do seu 
teste de seleção. A prova, que é a mesma para todos os alunos, consiste de dez 
questões objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa deve ler o 
gabarito da prova e, a seguir, o nome de um candidato e as opções que aparecem no
seu cartão de respostas. Para cada candidato, o programa deve imprimir o seu 
percentual de acertos. O processamento deve ser encerrado quando for encontrado 
um candidato com o nome ´fim’, que não deve ser processado. O programa deve 
imprimir também a pontuação média dos candidatos.*/

void main(){

    char gabarito[quantidade], resp[quantidade], candidato[50];
    int k, certas=0, perc_certas;
    
    for(k=0; k<quantidade; k++){
        printf("Informe a resposta da Q-%d: ", k+1);
        scanf(" %c", &gabarito[k]);
    }
        printf("Informe o nome do candidato: ");
        scanf("%s", candidato);
        for(k=0; k<quantidade; k++){
            printf("Informe a resposta do candidato Q-%d: ", k+1);
            scanf(" %c", &resp[k]);
            if(resp[k]==gabarito[k]){
                certas++;
            }
        }
        perc_certas=(certas*100)/quantidade;
        printf("O candidato %s acertou %d%% da prova\n", candidato, perc_certas);


}