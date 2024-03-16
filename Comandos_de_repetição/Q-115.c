#include <stdio.h>
const int quantidade_pessoas = 20;
    
    /*115) Escreva um programa que leia o peso e a altura de um grupo de 20 pessoas e calcule o percentual de pessoas abaixo do peso, o percentual de pessoas acima do peso e o percentual de pessoas que estão dentro da faixa de peso adequada.*/

void main(){
    int k;
    float peso, altura, abaixo_peso=0.0, peso_ideal=0.0, acima_peso=0.0;
    for(k=1; k<=quantidade_pessoas; k++){
        printf("Informe o peso e a altura da %do pessoa: ", k);
        scanf("%f%f", &peso, &altura);
        float imc = peso/(altura * altura);
        if(imc<18){
            abaixo_peso++;
        }else if(imc>=18 && imc<=25){
            peso_ideal++;
        }else if(imc>25){
            acima_peso++;
        } 
    }
    float porcentagem_abaixo = (abaixo_peso*100)/quantidade_pessoas;
    float porcentagem_ideal = (peso_ideal*100)/quantidade_pessoas;
    float porcentagem_acima = (acima_peso*100)/quantidade_pessoas;
    printf("Porcentagem de pessoas abaixo do peso: %.2f%%\n", porcentagem_abaixo);
    printf("Porcentagem de pessoas no seu peso ideal: %.2f%%\n", porcentagem_ideal);
    printf("Porcentagem de pessoas acima do peso: %.2f%%\n", porcentagem_acima);
}
