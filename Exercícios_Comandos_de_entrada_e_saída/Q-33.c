#include <stdio.h>
#include <conio.h>


    /*33. Escreva um programa que leia o nome e a quantidade de votos recebidos por cada um dos três candidatos a prefeito de uma cidade e calcule o percentual de votos recebidos por cada candidato. Para resolver este programa, considere que não houve votos brancos e nem nulos. */

void main(){

    printf("\n");//quebra de linha para organização do programa.

    //Lendo nome e quantidade dos três candidatos.
    char nome1[20];
    int quantidade1;
    printf("Informe o nome do candidato 1: ");
    scanf("%s", nome1);
    printf("Informe a quantidade de votos recebidos pelo candidato %s: ");
    scanf("%d", &quantidade1);

    printf("\n");

    char nome2[20];
    int quantidade2;
    printf("Informe o nome do candidato 2: ");
    scanf("%s", nome2);
    printf("Informe a quantidade de votos recebidos pelo candidato %s: ");
    scanf("%d", &quantidade2);

    printf("\n");

    char nome3[20];
    int quantidade3;
    printf("Informe o nome do candidato 3: ");
    scanf("%s", nome3);
    printf("Informe a quantidade de votos recebidos pelo candidato %s: ");
    scanf("%d", &quantidade3);
    printf("\n");

    //Calculando o total e a porcentagem de votos dos três candidatos.
    int total_votos = quantidade1 + quantidade2 + quantidade3;
    float votos_cand_1 = (quantidade1*100)/total_votos;
    float votos_cand_2 = (quantidade2*100)/total_votos;
    float votos_cand_3 = (quantidade3*100)/total_votos;

    //Informando o resultado para o usuário.
    printf("O total de votos foi: %d\n", total_votos);
    printf("Porcentagem candidato %s: %.2f%%\n",nome1, votos_cand_1);
    printf("Porcentagem candidato %s: %.2f%%\n",nome2, votos_cand_2);
    printf("Porcentagem candidato %s: %.2f%%\n",nome3, votos_cand_3);

    getch();
}