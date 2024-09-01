#include <stdio.h>
#include <conio.h>

/*199. Escreva um programa que leia três números inteiros e calcule a sua média aritmética. O cálculo da média deve ser realizado através de um subprograma.*/

//Criando função
float calcular_media(float n1, float n2, float n3){
    float soma = n1 + n2 + n3;
    float media = soma/3;
    return media;
}

//Código principal que retorna o resultado obtido pela função
void main(){
    float n1, n2, n3, media;
    printf("Informe tres numeros interos: ");
    scanf("%f%f%f", &n1, &n2, &n3);
    media = calcular_media(n1, n2, n3);
    printf("Media dos numeros lidos: %.2f", media);

    getch();
}