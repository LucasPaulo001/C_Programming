#include <stdio.h>
#include <conio.h>

/*212. Escreva um programa que leia o número total de questões existentes em uma prova e o número de questões que um candidato acertou e determine o seu percentual de 
acertos e o seu percentual de erros. O cálculo deve ser realizado através de um 
subprograma.
*/

void porcento(int total_q, int acertos){
    int por_acertos = (acertos*100)/total_q;
    int por_erros = ((total_q - acertos)*100)/total_q;
    printf("Percentual de acertos: %d%%\nPercentual de erros: %d%%", por_acertos, por_erros);
}

void main(){
    int total_q, acertos;
    printf("Informe a quantidade total de questoes da prova e a quantidade de acertos: ");
    scanf("%d%d", &total_q, &acertos);
    porcento(total_q, acertos);

    getch();
}