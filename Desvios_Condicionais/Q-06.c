#include <stdio.h>

    /*63) Escreva um programa que leia o número de gols marcados pelo time da casa e o número de gols marcado pelo time visitante e verifique se o jogo foi vencido pelo time da casa, pelo time visitante ou se terminou empatado.*/

void main(){
    int gol_casa, gol_visitante;
    printf("Informe o numeros de gols marcados pelo time da casa e o numero de gols marcados pelo time visitante: ");
    scanf("%d%d", &gol_casa, &gol_visitante);
    if(gol_casa == gol_visitante){
        printf("O jogo foi empatado! ");
    }else if(gol_casa>gol_visitante){
        printf("O jogo foi vencido pelo time da casa! ");
    }else{
        printf("O jogo foi vencido pelo time visitante! ");
    }
}