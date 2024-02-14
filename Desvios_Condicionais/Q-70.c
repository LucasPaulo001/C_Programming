#include <stdio.h>

    /*70) Escreva um programa que leia os valores dos três lados de um triângulo e o classifique como equilátero, isósceles ou escaleno.*/

    /*1º Definição de triângulo escaleno: Triângulo é classificado como escaleno quando ele tem todos os seus lados com medidas distintas*/

    /*2º Definição de triângulo isósceles: "É aquele que possui dois lados congruentes (com a mesma medida)."*/

    /*3º Definição de triângulo equilátero: É aquele que possui os três lados de tamanhos iguais*/

void main(){
    int lado1, lado2, lado3;
    printf("Informe os tres lados de um triangulo: ");
    scanf("%d%d%d", &lado1, &lado2, &lado3);
    if(lado1 == lado2 && lado2 == lado3){
        printf("Triangulo equilatero! ");
    }else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
        printf("Triangulo isosceles! ");
    }else if(lado1 != lado2 && lado2 != lado3){ 
        printf("Triangulo escaleno! ");
    }
}