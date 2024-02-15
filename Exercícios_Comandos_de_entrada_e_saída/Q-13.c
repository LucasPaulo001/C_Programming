#include <stdio.h>
#include <conio.h>
const int bits = 8000;      /*Valores equivalentes a 1kb*/
const int bytes = 1000;
const float MB = 0.001;

    /*. Escreva um programa que leia um valor em KB e calcule o seu valor correspondente em bits, bytes, MB
    e GB.*/

void main(){
    int kb;
    printf("Informe o valor em KB: ");
    scanf("%d", &kb);
    int valor_bits = bits*kb;
    int valor_bytes = bytes*kb;
    float valor_mb = kb*MB;
    float valor_gb = valor_mb/1000;
    printf("Valor em bits: %d\n", valor_bits);
    printf("Valor em bytes: %d\n", valor_bytes);
    printf("Valor em mb: %.4f\n", valor_mb);
    printf("Valor em gb = %f", valor_gb);

    getch();
}