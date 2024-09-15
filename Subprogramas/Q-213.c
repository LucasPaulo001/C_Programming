#include <stdio.h>
#include <conio.h>
#include <math.h>

/*213. Escreva um programa que leia os valores das coordenadas X e Y e dois pontos P e Q e determine a distância entre estes dois pontos. A distância entre dois pontos pode ser determinada através da distância euclidiana. O cálculo da distância deve ser realizado através de um subprograma, que deve receber como entrada os valores das 
coordenadas x e y dos dois pontos.*/

int dist_euclidiana(int x1, int y1, int x2, int y2){
    int distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return distancia;
}
void main(){
    int x1, y1, x2, y2;
    printf("Informe as coordenadas x1 e y1: ");
    scanf("%d%d", &x1, &y1);
    printf("Informe as coordenadas x2 e y2: ");
    scanf("%d%d", &x2, &y2);
    int valor_distancia = dist_euclidiana(x1, y1, x2, y2);
    printf("O valor da distancia eh: %d", valor_distancia);

    getch();
}