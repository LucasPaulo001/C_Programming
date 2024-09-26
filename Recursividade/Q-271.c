#include <stdio.h>
#include <conio.h>
const int tamanho = 5;

/*271. Escreva um subprograma recursivo que receba como entrada um vetor de dez 
números inteiros já ordenados, um número inteiro X, e dois índices M e N e verifique 
se o número X está presente no vetor entre as posições M e N. Esta verificação deve 
ser feita através de uma busca binária.
*/

int verificar(int v[], int tam, int x, int inicio, int fim){
    int meio;
    if(inicio <= fim){
        meio = (inicio + fim)/2;
        if(v[meio] == x){
            return meio;
        }
        else{
            if(x < v[meio]){
                return verificar(v, tam, x, inicio, meio - 1);
            }
            else{
                return verificar(v, tam, x, meio + 1, fim);
            }
        }
    }
    return -1;
}
void main(){
    int vetor[tamanho];
    int k, i, x, m, n;
    //Lendo o vetor
    for(k=0; k<tamanho; k++){
        printf("Informe o valor %d do vetor: ", k);
        scanf("%d", &vetor[k]);
    }
    //ordenando o vetor
    int aux;
    for(k=0; k<tamanho; k++){
        for(i=k+1; i<tamanho-1; i++){
            if(vetor[k]>vetor[i]){
                aux = vetor[k];
                vetor[k]=vetor[i];
                vetor[i]=aux;
            }
        }
    }
    printf("\nInformando vetor ordenado\n");
    for(k=0; k<tamanho; k++){
        printf("%d ", vetor[k]);
    }
    printf("\nInforme dois numeros inteiros que serao o intervalo e um numero para ser verificado se esta entre o intervalo informado: ");
    scanf("%d%d%d", &m, &n, &x);
    int res = verificar(vetor, tamanho, x, m, n);
    if(res == -1){
        printf("\nO numero nao esta no vetor");
    }
    else{
        printf("\nO numero esta na posicao %d do vetor", res);
    }
    

    getch();
}