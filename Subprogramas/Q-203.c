#include <stdio.h>
#include <conio.h>

/*203. Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a sua área, que deve ser calculada através de um subprograma.
*/

float area(float base, float altura){
    float valor_area = (base*altura)/2;
    return valor_area;
}

void main(){
    float base, altura, valor_area;
    printf("Informe o valor da base e da altura do triangulo respectivamente: ");
    scanf("%f%f", &base, &altura);
    valor_area = area(base, altura);
    printf("O valor da area do triangulo eh: %.2f", valor_area);
    
    getch();
}