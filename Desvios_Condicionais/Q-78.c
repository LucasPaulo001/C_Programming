#include <stdio.h>
#include <conio.h>

/*Alfredo tem um carro flex e sempre fica na dúvida se é melhor abastecê-lo com álcool
ou gasolina. Um dia um de seus amigos o ensinou a seguinte dica: “Pegue o valor do
preço da gasolina e multiplique por 0,7. Se o valor for menor ou igual ao valor do preçodo álcool, abasteça com gasolina. Caso contrário, abasteça com álcool.” Com base
nestas informações, escreva um programa que leia o preço do litro da gasolina e do
álcool e verifique se é melhor abastecer com álcool ou com gasolina.*/

void main(){
    float preco_gasolina, preco_alcool;
    printf("Informe o preco do litro de gasolina e o preco do alcool: ");
    scanf("%f%f", &preco_gasolina, &preco_alcool);
    float multi = preco_gasolina*0.7;
    if(multi <= preco_alcool){
        printf("Abasteca com gasolina ");
    }else{
        printf("Abasteca com alcool ");
    }
}