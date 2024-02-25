#include <stdio.h>
#include <conio.h>

    /*29. Escreva um programa que leia o número total de questões existentes em uma prova e o número de questões que um candidato acertou e determine o seu percentual de acertos e o seu percentual de erros.*/

void main(){
    int total, acertos;
    printf("Informe o numero total de questoes da prova e o numero de questoes corretas: ");
    scanf("%d%d", &total, &acertos);
    int porc_acertos = (acertos*100)/total;
    int quantidade_erros = total - acertos;
    int porc_erros = (quantidade_erros*100)/total;
    printf("Porcentagem de acertos: %d%%\n", porc_acertos);
    printf("Porcentagem erros: %d%%", porc_erros);

    getch();
}