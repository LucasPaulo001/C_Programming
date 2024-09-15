#include <stdio.h>
#include <conio.h>
#include <math.h>
const float PI = 3.14;

/*202. Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua área e o seu comprimento. O programa deve fornecer um subprograma para calcular 
a área e outro para calcular o comprimento. 
*/

float area(float raio){
    float valor_area = PI * (raio*raio);
    return valor_area;
}
float comprimento(float raio){
    float valor_comp = 2*PI*raio;
    return valor_comp; 
}

void main(){
    float raio;
    printf("Informe o valor do raio: ");
    scanf("%f", &raio);
    float valor_area = area(raio);
    float valor_comp = comprimento(raio);
    printf("Valor da area: %.2f", valor_area);
    printf("\nValor do comprimento: %.2f", valor_comp);


}