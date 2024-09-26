#include <stdio.h>
#include <conio.h>
const int tamanho = 10;

/*Escreva um subprograma recursivo que receba um vetor de tamanho 10 e imprima na ordem inversa*/

void inverter(int v[], int tam, int inicio, int fim){
    int aux;
    if(inicio < fim){//O caso de parada é quando o meu vetor chegar até a metade
        aux = v[inicio];
        v[inicio] = v[fim];
        v[fim] = aux;
        inverter(v, tam, inicio + 1, fim - 1);//0 +1... -> 5 / 6 <- ...1- 9
    }
}
void main(){
    int vetor[tamanho];
    int k;
    //Lendo vetor
    for(k=0; k<tamanho; k++){
        printf("Informe o %d valor do vetor: ", k);
        scanf("%d", &vetor[k]);
    }
    //Imprimindo vetor
    printf("\nVetor antes da inversao:\n");
    for(k=0; k<tamanho; k++){
        printf("%d ", vetor[k]);
    }
    //Imprimindo vetor depois
    printf("\nVetor depois da inversao:\n");
    //Chamando o procedimento de inversão
    inverter(vetor, tamanho, 0, tamanho - 1);
    //Repetição da impressão dos valores após a inversão 
    for(k=0; k<tamanho; k++){
        printf("%d ", vetor[k]);
    }

    getch();
}