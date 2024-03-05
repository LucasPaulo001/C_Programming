#include <stdio.h>
#include <conio.h>
const int mb_para_kb = 1000;

    /*39. Escreva um programa que leia o tamanho de um arquivo em MB e a taxa de 
    transmissão da rede em KB/s e calcule o tempo aproximado necessário para a 
    transmissão do arquivo. A resposta deve ser dada através de uma mensagem na forma 
    X horas, Y minutos e Z segundos.*/

void main(){
    int tamanho, taxa_download;
    printf("Informe o tamanho do arquivo em MB e a taxa de KB/s: ");
    scanf("%d%d", &tamanho, &taxa_download);

    //primeiro transformamos os MBs em KB, para que a transformação em segundos não dê uma divisão inexata(em vez de dividir 1mb por 250kb, dividiremos 1000kb por 250kb)
    int tempo_total_seg = (tamanho*mb_para_kb)/taxa_download;

    //transformando os segundos em horas
    int horas = tempo_total_seg / 3600;

    //transformando os segundos em minutos
    int minutos = tempo_total_seg % 3600 / 60;

    //informando os segundos restantes
    int segundos = tempo_total_seg % 60;
    printf("Tempo de download: %dh: %dmin: %dseg", horas, minutos, segundos);

    getch();
    
}