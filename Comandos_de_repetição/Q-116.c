#include <stdio.h>
#include <conio.h>
const int quantidade_pessoas = 5;

    /*116) Escreva um programa que leia o nome, o sexo e a idade de um grupo de 20 pessoas e calcule o percentual de mulheres que tem entre 18 e 21 anos.*/

void main(){
    char nome[50];
    char sexo;
    int idade, k;
    int cont=0;
    for(k=1; k<=quantidade_pessoas; k++){
        printf("Pessoa %d: \n", k);
        printf("Informe o nome: ");
        scanf("%s", nome);
        printf("Informe o sexo (M ou F): ");
        scanf(" %c", &sexo);
        printf("Informe a idade: ");
        scanf("%d", &idade);
        printf("\n");
        if(sexo == 'F' && idade >= 18 && idade <= 21){
            cont++;
        }
    }
    float porcentagem = (cont * 100)/quantidade_pessoas;
    printf("Porcentagem de pessoas entre 18 e 21 anos do sexo feminino: %.2f%%", porcentagem);

    getch();
}

