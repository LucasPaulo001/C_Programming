#include <stdio.h>
#include <conio.h>
const int dist_litro = 14;

    /*32. O carro de João consegue percorrer em média 14 km consumindo 1 litro de 
    combustível. Escreva um programa que leia o valor da distância que João vai percorrer durante uma viagem e o preço atual de um litro de combustível e calcule quanto ele deverá gastar com combustível durante a viagem.*/

void main(){
    float distancia, valor_comb;
    printf("Informe a distancia que Joao ira percorrer e o preco atual do litro de combustivel: ");
    scanf("%f%f", &distancia, &valor_comb);
    float valor_total = (distancia/dist_litro)*valor_comb;
    printf("Valor total de combustivel: %.2fR$", valor_total);

    getch();
}