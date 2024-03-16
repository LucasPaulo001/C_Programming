#include <stdio.h>
const int gramas = 250;

    /*60) Escreva um programa que leia o número de pessoas que vão participar de um 
    churrasco e calcule quantos quilos de carne devem ser comprados. Para isso, 
    considere que cada pessoa consome 250 g de carne.*/

void main(){
    int num_pessoas;
    printf("Informe o numero de pessoas que vao participar do churrasco: ");
    scanf("%d", &num_pessoas);
    int quantidade = num_pessoas * gramas;
    if(quantidade < 1000){
        printf("A quantidade de carne que sera comprada: %dg", quantidade);
    }
    else if(quantidade >= 1000){
        int kg = quantidade/1000;
        printf("A quantidade de carne que sera comprada: %dkg", kg);
    }

}