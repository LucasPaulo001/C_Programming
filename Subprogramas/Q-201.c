#include <stdio.h>
#include <conio.h>
#include <math.h>

/*201. Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu triplo, o seu quadrado, o seu cubo e a sua raiz quadrada. Cada uma das informações solicitadas deve ser calculada através de um subprograma.*/

int calculo_dobro(int num){
    int dobro = num*2;
    return dobro;
}

int calculo_triplo(int num){
    int triplo = num*3;
    return triplo;
}

int calculo_quadrado(int num){
    int quadrado = num*num;
    return quadrado;
}

int calculo_cubo(int num){
    int cubo = num*num*num;
    return cubo;
}

int calculo_raiz_quad(int num){
    int raiz = sqrt(num);
    return raiz;
}

void main(){
    int num, dobro, triplo, quadrado, cubo, raiz_q;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    dobro = calculo_dobro(num);
    triplo = calculo_triplo(num);
    quadrado = calculo_quadrado(num);
    cubo = calculo_cubo(num);
    raiz_q = calculo_raiz_quad(num);
    printf("Dobro de %d: %d\n", num, dobro);
    printf("Triplo de %d: %d\n", num, triplo);
    printf("Quadrado de %d: %d\n", num, quadrado);
    printf("Cubo de %d: %d\n", num, cubo);
    printf("Raiz quadrada de %d: %d\n", num, raiz_q);

    getch();
}