#include <stdio.h>
#include <conio.h>


    /*26. Escreva um programa que leia o peso e a altura dos atletas das quatro duplas que vão participar de um torneio de vôlei de praia e calcule o peso e a altura média de cada dupla e o peso e a altura média de todos os jogadores do torneio.*/

void main(){
    
    /*Informando o peso e altura dos atletas de cada dupla*/
    printf("\n");
    float peso_d1_1, peso_d1_2;
    printf("Peso dos atletas da dupla 01: ");
    scanf("%f%f", &peso_d1_1, &peso_d1_2);
    
    float altura_d1_1, altura_d1_2;
    printf("Altura dos atletas da dupla 01: ");
    scanf("%f%f", &altura_d1_1, &altura_d1_2);

    printf("\n");

    float peso_d2_1, peso_d2_2;
    printf("Peso dos atletas da dupla 02: ");
    scanf("%f%f", &peso_d2_1, &peso_d2_2);
    
    float altura_d2_1, altura_d2_2;
    printf("Altura dos atletas da dupla 02: ");
    scanf("%f%f", &altura_d2_1, &altura_d2_2);

    printf("\n");

    float peso_d3_1, peso_d3_2;
    printf("Peso dos atletas da dupla 03: ");
    scanf("%f%f", &peso_d3_1, &peso_d3_2);

    float altura_d3_1, altura_d3_2;
    printf("Altura dos atletas da dupla 03: ");
    scanf("%f%f", &altura_d3_1, &altura_d3_2);

    printf("\n");

    float peso_d4_1, peso_d4_2;
    printf("Peso dos atletas da dupla 04: ");
    scanf("%f%f", &peso_d4_1, &peso_d4_2);
 
    float altura_d4_1, altura_d4_2;
    printf("Altura dos atletas da dupla 04: ");
    scanf("%f%f", &altura_d4_1, &altura_d4_2);

    printf("\n");
    /*Media dos pesos de cada dupla*/
    float peso_medio_d1 = (peso_d1_1 + peso_d1_2)/2;
    float peso_medio_d2 = (peso_d2_1 + peso_d2_2)/2;
    float peso_medio_d3 = (peso_d3_1 + peso_d3_2)/2;
    float peso_medio_d4 = (peso_d4_1 + peso_d4_2)/2;
    printf("Media de peso da dupla 01: %.2f\n", peso_medio_d1);
    printf("Media de peso da dupla 02: %.2f\n", peso_medio_d2);
    printf("Media de peso da dupla 03: %.2f\n", peso_medio_d3);
    printf("Media de peso da dupla 04: %.2f\n", peso_medio_d4);

    /*Media das alturas de todos os jogadores do torneio*/
    float media_alturas = (altura_d1_1 + altura_d1_2 + altura_d2_1 + altura_d2_2 + altura_d3_1 + altura_d3_2 + altura_d4_1 + altura_d4_2)/8;
    printf("Altura media de todas as equipes do torneio: %.2f", media_alturas);

    getch();
    
}