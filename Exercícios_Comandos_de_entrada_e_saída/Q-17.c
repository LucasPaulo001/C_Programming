#include <stdio.h>
#include <conio.h>


    /*17. Escreva um programa que leia a área de uma casa e o valor cobrado por um arquiteto por cada metro quadrado de um projeto arquitetônico e calcule o custo final do projeto.*/

void main(){
    float area, valor;
    printf("Informe a area da casa e o valor cobrado por metro quadrado: ");
    scanf("%f%f", &area, &valor);
    float custo_final = area * valor;
    printf("Valor final: %.2fR$", custo_final);

    getch();

}