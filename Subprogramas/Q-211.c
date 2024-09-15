#include <stdio.h>
#include <conio.h>
#include <math.h>
const float PI = 3.14;

/*211. Escreva um programa que leia o valor do raio de uma esfera e determine o seu 
volume. O cálculo deve ser realizado através de um subprograma
*/

float volume(float raio){
    float valor_vol = (4.0/3.0)*PI*pow(raio, 3);
    return valor_vol;
}
void main(){
    float raio;
    printf("Informe o valor do raio da esfera: ");
    scanf("%f", &raio);
    float valor_volume = volume(raio);
    printf("O valor do volume da esfera eh: %.2f", valor_volume);

    getch();
}