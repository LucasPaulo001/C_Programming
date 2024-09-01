#include <stdio.h>
#include <conio.h>

/*200. Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e o seu perímetro. O programa deve ter um subprograma para calcular a área e outro para calcular o perímetro.*/

//Função para calcular a área do quadrado
int calculo_area(int lado){
    int area = lado*lado;
    return area;
}

//Função para calcular o perímetro do quadrado
int calculo_perimetro(int lado){
    int perimetro = lado*4;
    return perimetro;
}

//Código principal que retorna os valores
void main(){
    int lado, area, perimetro;
    printf("Informe o valor do lado: ");
    scanf("%d ", &lado);
    area = calculo_area(lado);
    perimetro = calculo_perimetro(lado);

    getch();
}