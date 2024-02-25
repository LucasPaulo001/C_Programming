#include <stdio.h>
#include <conio.h>
const int pts_certas = 5;
const int pts_erradas = 3;

    /*31. Em um determinado concurso público, para cada questão que um candidato acerta ele ganha 5 pontos, para cada questão que ele erra ele perde 3 pontos e para cada questão que ele deixa em branco ele não ganha e nem perde pontos. Escreva um programa que leia o número de questões que um candidato acertou, o número de questões que ele errou e o número de questões que ele deixou em branco e determine a sua pontuação final.*/

void main(){
    int certas, erradas, em_branco;
    printf("Informe a quantidade de questoes certas, o numero de questoes erradas e o numero de questoes em branco: ");
    scanf("%d%d%d", &certas, &erradas, &em_branco);
    int pontuacao_certas = certas*pts_certas;
    int pontuacao_erradas = erradas*pts_erradas;
    int pontuacao_branco = em_branco*1;
    int pontuacao_total = pontuacao_certas - pontuacao_erradas + pontuacao_branco;
    printf("Pontuacao total: %dpts", pontuacao_total);

    getch();
}