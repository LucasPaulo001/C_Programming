#include <stdio.h>
#include <conio.h>
const int quantidade = 12;

/*Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o mês por extenso: janeiro, fevereiro …). Desconsidere empates.*/

void main(){
    float temp_meses[quantidade];
    int k, maior_temp=0, menor_temp=120, ind_maior, ind_menor;
    //lendo as temperaturas
    for(k=0; k<quantidade; k++){
        printf("Informe a temperatura do mes %d: ", k+1);
        scanf("%f", &temp_meses[k]);
    }
    for(k=0; k<quantidade; k++){
        if(menor_temp>temp_meses[k]){
            menor_temp=temp_meses[k];
        }
        if(maior_temp<temp_meses[k]){
            maior_temp=temp_meses[k];
        }
    }
    printf("A menor temperatura foi %d ", menor_temp);
    switch (ind_menor){
    case 0:
        printf("Janeiro");
        break;
    case 1:
        printf("Fevereiro");
        break;
    case 2:
        printf("Marco");
        break;
    case 3:
        printf("Abril");
        break;
    case 4:
        printf("Maio");
        break;
    case 5:
        printf("Junho");
        break;
    case 6:
        printf("Julho");
        break;
    case 7:
        printf("Agosto");
        break;
    case 8:
        printf("Setembro");
        break;
    case 9:
        printf("Outubro");
        break;
    case 10:
        printf("Novembro");
        break;
    case 11:
        printf("Desembro");
        break;
    default:
        break;
    }
    printf("\nA maior temperatura foi %d ", maior_temp);
    switch (ind_maior){
    case 0:
        printf("Janeiro");
        break;
    case 1:
        printf("Fevereiro");
        break;
    case 2:
        printf("Marco");
        break;
    case 3:
        printf("Abril");
        break;
    case 4:
        printf("Maio");
        break;
    case 5:
        printf("Junho");
        break;
    case 6:
        printf("Julho");
        break;
    case 7:
        printf("Agosto");
        break;
    case 8:
        printf("Setembro");
        break;
    case 9:
        printf("Outubro");
        break;
    case 10:
        printf("Novembro");
        break;
    case 11:
        printf("Desembro");
        break;
    default:
        break;
    }
}