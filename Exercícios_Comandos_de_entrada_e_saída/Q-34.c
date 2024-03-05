#include <stdio.h>
#include <conio.h>

    /*34. Escreva um programa que leia o dia do mês em que o cliente fez uma compra e o prazo de entrega dado pelo vendedor e calcule o dia do mês (atual ou dos meses seguintes) em que o cliente deve receber o produto. Para resolver este programa, considere que cada mês tem exatamente 30 dias. */

void main(){
    int dia_compra, prazo;
    printf("Informe o dia do mes que a compra foi feita e o prazo de entrega: ");
    scanf("%d%d", &dia_compra, &prazo);
    int valor_prazo = (prazo + dia_compra)%30;
    printf("Prazo de entrega para dia: %d", valor_prazo);

    getch();
}