#include <stdio.h>
#include <conio.h>
const int tamanho = 5;

/*270. Escreva um subprograma recursivo que receba como entrada dois vetores de 10 
números inteiros cada e um número inteiro N e verifique se os dois vetores são 
idênticos a partir da posição N.*/

int verificar(int v1[], int tam_v1, int v2[], int tam_v2, int pos_inicial){
    /*A condição de parada será quando a minha posição inicial atingir um valor igual ou maior ao tamanho do vetor, ou seja em um vetor de 5, quando o valor for 5 ou maior que isso*/
    if(pos_inicial >= tam_v1 && pos_inicial >= tam_v2){
        return 0;
    }
    else{
        if(v1[pos_inicial] == v2[pos_inicial]){
            return 1 + verificar(v1, tam_v1, v2, tam_v2, pos_inicial + 1);
        }
        else{
            return verificar(v1, tam_v1, v2, tam_v2, pos_inicial + 1);
        }
    }
}
void main(){
    int vetor1[tamanho], vetor2[tamanho];
    int k, n;
    for(k=0; k<tamanho; k++){
        printf("Informe o valor %d do vetor1: ", k);
        scanf("%d", &vetor1[k]);
    }
    printf("\n");
    for(k=0; k<tamanho; k++){
        printf("Informe o valor %d do vetor2: ", k);
        scanf("%d", &vetor2[k]);
    }
    printf("Informe a posicao inicial para a verificacao entre os dois vetores: ");
    scanf("%d", &n);
    int res = verificar(vetor1, tamanho, vetor2, tamanho, n);
    if(tamanho - n == res){
        printf("Os vetores a partir da posicao %d sao identicos", k);
    }
    else{
        printf("Os vetores a partir da posicao %d nao sao identicos", k);
    }

    getch();
}