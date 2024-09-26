#include <stdio.h>
#include <conio.h>
const int tamanho = 10;

/*Escreva um subprograma recursivo que receba um vetor de tamanho 10 e informe o maior elemento do vetor*/

int maior(int v[], int tam, int maior_v){
    if(tam == 0){
        return v[maior_v];
    }
    else{
        if(v[tam - 1] > v[maior_v]){
            return maior(v, tam - 1, tam - 1);
        }
        else{
            return maior(v, tam-1, maior_v);
        }
    }
}
void main(){
    int vetor[tamanho];
    int k;
    for(k=0; k<tamanho; k++){
        printf("Informe o valor %d do vetor: ", k);
        scanf("%d", &vetor[k]);
    }
    int res = maior(vetor, tamanho, 0);
    printf("Maior: %d", res);
    
    getch();
}